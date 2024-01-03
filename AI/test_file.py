% Parameters
L = 1e-3;    % Inductance (H)
C = 100e-6;  % Capacitance (F)
Vg = 100;    % Input voltage (V)
R = 0.1;     % Load resistance (ohms)
fs = 10e3;   % Switching frequency (Hz)
T = 1/fs;    % Switching period (s)
I_D = 5;     % Diode current amplitude (A)
omega = 2*pi*fs;  % Angular frequency

% Initial conditions
v_C = zeros(3, 1);
i_L = zeros(3, 1);
i_D = [I_D; I_D; I_D];

% Simulation time
t = 0:T:1;  % 1 second simulation

% Main simulation loop
for k = 1:length(t)-1
    % Diode current equations
    i_D = I_D * sin(omega * t(k) + [0; 2*pi/3; -2*pi/3]);

    % Inductor voltage equations
    v_L = Vg - v_C - i_D * R;

    % Capacitor current equations
    i_C = -i_L / R - i_D;

    % Update state variables using Euler's method
    v_C = v_C + T/C * i_C;
    i_L = i_L + T/L * v_L;

    % Output voltage
    V_out(k) = sum(v_C);
end

% Plotting
figure;
subplot(2, 1, 1);
plot(t, V_out);
title('Output Voltage');
xlabel('Time (s)');
ylabel('Voltage (V)');

subplot(2, 1, 2);
plot(t(1:end-1), diff(V_out)/T);
title('Output Current');
xlabel('Time (s)');
ylabel('Current (A)');