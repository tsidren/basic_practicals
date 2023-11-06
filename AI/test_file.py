import pygame
import sys

class TicTacToe:
    def __init__(self):
        # Initialize Pygame
        pygame.init()

        # Constants
        self.WIDTH, self.HEIGHT = 600, 400
        self.LINE_COLOR = (0, 0, 0)
        self.LINE_WIDTH = 15
        self.GRID_SIZE = 3
        self.GRID_WIDTH = self.WIDTH // self.GRID_SIZE
        self.GRID_HEIGHT = self.HEIGHT // self.GRID_SIZE
        self.CIRCLE_RADIUS = self.GRID_WIDTH // 3
        self.CIRCLE_COLOR = (0, 0, 255)
        self.CROSS_COLOR = (255, 0, 0)
        self.FONT_SIZE = 36

        # Initialize the game window
        self.screen = pygame.display.set_mode((self.WIDTH, self.HEIGHT))
        pygame.display.set_caption("Tic Tac Toe")

        # Initialize variables
        self.grid = [['' for _ in range(self.GRID_SIZE)] for _ in range(self.GRID_SIZE)]
        self.player_turn = 'X'
        self.game_over = False
        self.winner = None

        # Initialize fonts
        self.font = pygame.font.Font(None, self.FONT_SIZE)

    def draw_grid(self):
        for row in range(1, self.GRID_SIZE):
            pygame.draw.line(self.screen, self.LINE_COLOR, (0, row * self.GRID_HEIGHT), (self.WIDTH, row * self.GRID_HEIGHT), self.LINE_WIDTH)
            pygame.draw.line(self.screen, self.LINE_COLOR, (row * self.GRID_WIDTH, 0), (row * self.GRID_WIDTH, self.HEIGHT), self.LINE_WIDTH)

    def draw_x(self, row, col):
        x = col * self.GRID_WIDTH + self.GRID_WIDTH // 2
        y = row * self.GRID_HEIGHT + self.GRID_HEIGHT // 2
        pygame.draw.line(self.screen, self.CROSS_COLOR, (x - self.CIRCLE_RADIUS, y - self.CIRCLE_RADIUS), (x + self.CIRCLE_RADIUS, y + self.CIRCLE_RADIUS), self.LINE_WIDTH)
        pygame.draw.line(self.screen, self.CROSS_COLOR, (x - self.CIRCLE_RADIUS, y + self.CIRCLE_RADIUS), (x + self.CIRCLE_RADIUS, y - self.CIRCLE_RADIUS), self.LINE_WIDTH)

    def draw_o(self, row, col):
        x = col * self.GRID_WIDTH + self.GRID_WIDTH // 2
        y = row * self.GRID_HEIGHT + self.GRID_HEIGHT // 2
        pygame.draw.circle(self.screen, self.CIRCLE_COLOR, (x, y), self.CIRCLE_RADIUS, self.LINE_WIDTH)

    def check_win(self, player):
        for row in range(self.GRID_SIZE):
            if all(self.grid[row][col] == player for col in range(self.GRID_SIZE)):
                return True
        for col in range(self.GRID_SIZE):
            if all(self.grid[row][col] == player for row in range(self.GRID_SIZE)):
                return True
        if all(self.grid[i][i] == player for i in range(self.GRID_SIZE)) or all(self.grid[i][self.GRID_SIZE - 1 - i] == player for i in range(self.GRID_SIZE)):
            return True
        return False

    def play(self):
        while True:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    sys.exit()

                if not self.game_over:
                    if event.type == pygame.MOUSEBUTTONDOWN and not self.game_over:
                        x, y = event.pos
                        col = x // self.GRID_WIDTH
                        row = y // self.GRID_HEIGHT

                        if self.grid[row][col] == '':
                            self.grid[row][col] = self.player_turn

                            if self.check_win(self.player_turn):
                                self.game_over = True
                                self.winner = self.player_turn
                            elif all(self.grid[i][j] != '' for i in range(self.GRID_SIZE) for j in range(self.GRID_SIZE)):
                                self.game_over = True
                                self.winner = 'Draw'

                            self.player_turn = 'O' if self.player_turn == 'X' else 'X'

            self.screen.fill((255, 255, 255))
            self.draw_grid()

            for row in range(self.GRID_SIZE):
                for col in range(self.GRID_SIZE):
                    if self.grid[row][col] == 'X':
                        self.draw_x(row, col)
                    elif self.grid[row][col] == 'O':
                        self.draw_o(row, col)

            if self.game_over:
                if self.winner == 'Draw':
                    result_text = "It's a Draw!"
                else:
                    result_text = f"Player {self.winner} wins!"
                text_surface = self.font.render(result_text, True, (0, 0, 0))
                text_rect = text_surface.get_rect(center=(self.WIDTH // 2, self.HEIGHT // 2))
                self.screen.blit(text_surface, text_rect)

                # Display a message to press Enter to close the window
                press_enter_text = self.font.render("Press Enter to close", True, (0, 0, 0))
                press_enter_rect = press_enter_text.get_rect(center=(self.WIDTH // 2, self.HEIGHT - 30))
                self.screen.blit(press_enter_text, press_enter_rect)

            else:
                turn_text = f"Player {self.player_turn}'s turn"
                text_surface = self.font.render(turn_text, True, (0, 0, 0))
                text_rect = text_surface.get_rect(center=(self.WIDTH + 100, self.HEIGHT // 2))
                self.screen.blit(text_surface, text_rect)

            pygame.display.update()

            # Check for Enter key press to close the window
            keys = pygame.key.get_pressed()
            if keys[pygame.K_RETURN]:
                pygame.quit()
                sys.exit()

if __name__ == "__main__":
    game = TicTacToe()
    game.play()

