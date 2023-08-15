import pygame
pygame.init()

width = 1000
height = 600
screen_res = (width, height)

pygame.display.set_caption("Bounce that thang")
screen = pygame.display.set_mode(screen_res)

red = (255, 0, 0)
black = (0, 0, 0)

ball_obj1 = pygame.draw.circle(surface=screen, color=red, center=[100, 100], radius=40)
ball_obj2 = pygame.draw.circle(surface=screen, color=(140, 237, 224), center=[100, 100], radius=40)
ball_obj3 = pygame.draw.circle(surface=screen, color=(198, 140, 237), center=[100, 100], radius=40)
speed = [4, 9]
speed2 = [0, 5]
speed3 = [7, 6]
#
# speed2 = speed
# speed3 = speed
FPS = 60
clock = pygame.time.Clock()

while True:
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()

    screen.fill(black)

    ball_obj1 = ball_obj1.move(speed2)
    if ball_obj1.top <= 0 or ball_obj1.bottom >= height:
        speed2[1] = -speed2[1]
    ball_obj2 = ball_obj2.move(speed)
    if ball_obj2.left <= 0 or ball_obj2.right >= width:
        speed[0] = -speed[0]
    if ball_obj2.top <= 0 or ball_obj2.bottom >= height:
        speed[1] = -speed[1]
    ball_obj3 = ball_obj3.move(speed3)
    if ball_obj3.left <= 0 or ball_obj3.right >= width:
        speed3[0] = -speed3[0]
    if ball_obj3.top <= 0 or ball_obj3.bottom >= height:
        speed3[1] = -speed3[1]

    pygame.draw.circle(surface=screen, color=red, center=ball_obj1.center, radius=40)
    pygame.draw.circle(surface=screen, color=(140, 237, 224), center=ball_obj2.center, radius=40)
    pygame.draw.circle(surface=screen, color=(198, 140, 237), center=ball_obj3.center, radius=40)

    pygame.display.flip()
