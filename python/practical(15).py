import pygame

width = 1000
height = 600
screen_res = (width, height)

pygame.display.set_caption("Bounce that thang")
screen = pygame.display.set_mode(screen_res)

red = (255, 0, 0)
black = (0, 0, 0)

ball_obj1 = pygame.draw.circle(surface=screen, color=red, center=[100, 100], radius=40)
speed = [0, 5]

FPS = 60
clock = pygame.time.Clock()

while True:
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()

    screen.fill(black)

    ball_obj1 = ball_obj1.move(speed)
    if ball_obj1.top <= 0 or ball_obj1.bottom >= height:
        speed[1] = -speed[1]

    pygame.draw.circle(surface=screen, color=red, center=ball_obj1.center, radius=40)

    pygame.display.flip()
