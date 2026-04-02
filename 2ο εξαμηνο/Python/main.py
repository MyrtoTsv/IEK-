import pygame
import sys
from debris import Debris
from racket import Racket
import global_variables
from button import Button
from ball import Ball


# Initialize Pygame
pygame.init()

# Window
screen = pygame.display.set_mode((global_variables.WIDTH, global_variables.HEIGHT))
pygame.display.set_caption("Pong Game")
clock = pygame.time.Clock()

score1=0
score2=0
# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GREY = (136,136,136)
# Γραμματοσειρά
pygame.font.init()
font = pygame.font.SysFont(None, 48)


# Δημιουργία ρακετών και σφαίρας
racket1 = Racket(50, global_variables.HEIGHT // 2, True)
racket2 = Racket(global_variables.WIDTH - 50, global_variables.HEIGHT // 2, False)
ball = Ball(global_variables.WIDTH // 2, global_variables.HEIGHT // 2)

global_variables.all_sprites.add(racket1, racket2, ball)

# Συνάρτηση του παιχνιδιού
def game():

    game_active = True


    while game_active:
        for event in pygame.event.get():
            if event.type == pygame.QUIT  or event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
                game_active = False


        # Ενημέρωση όλων των sprites
        global_variables.all_sprites.update()

        # Ελέγχει αν η μπάλα χτυπάει τις ρακέτες
        if pygame.sprite.collide_rect(ball, racket1) or pygame.sprite.collide_rect(ball, racket2):
            ball.vel.x *= -1
            
            # Δημιουργία συντριμμιών προς πάνω αριστερά και δεξιά και κάτω αριστερά και δεξιά
            d1 = Debris(ball.rect.centerx, ball.rect.centery, -ball.vel.x * 0.5, -ball.vel.y * 0.5)
            d2 = Debris(ball.rect.centerx, ball.rect.centery, ball.vel.x * 0.5, -ball.vel.y * 0.5)
            d3 = Debris(ball.rect.centerx, ball.rect.centery, -ball.vel.x * 0.5, ball.vel.y * 0.5)
            d4 = Debris(ball.rect.centerx, ball.rect.centery, ball.vel.x * 0.5, ball.vel.y * 0.5)
            global_variables.all_sprites.add(d1, d2, d3, d4)

        if pygame.sprite.collide_rect(ball, racket1) or pygame.sprite.collide_rect(ball, racket2):
            ball.vel.x += 1
            ball.vel.y += 1
            
        if ball.pos.x < 0 or ball.pos.x > 800 :
            ball.pos.x = global_variables.WIDTH//2
            ball.pos.y = global_variables.HEIGHT//2
        # Γέμισμα οθόνης
        screen.fill(GREY)

        # Σχεδίαση
        global_variables.all_sprites.draw(screen)
        
        # Ανανέωση οθόνης
        pygame.display.flip()
        clock.tick(30)


# Συνάρτηση μενού
def menu():

    # Δημιουργία Buttons
    start_btn = Button("Start", 300, 200, 200, 60)
    quit_btn = Button("Quit", 300, 300, 200, 60)

    # Group κουμπιών
    buttons = pygame.sprite.Group()
    buttons.add(start_btn, quit_btn)

    menu_active = True

    while menu_active:

        for event in pygame.event.get():
            if event.type == pygame.QUIT or event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
                menu_active = False
                pygame.quit()
                sys.exit()

            if start_btn.clicked(event):
                start_btn.text = "Resume"
                game()

            if quit_btn.clicked(event):
                menu_active = False
                pygame.quit()
                sys.exit()

        # Ενημέρωση κουμπιών
        buttons.update()

        # Γέμισμα οθόνης
        screen.fill(GREY)

        # Σχεδίαση κουμπιών
        buttons.draw(screen)

        # Ανανέωση οθόνης
        pygame.display.flip()
        clock.tick(30)

    pygame.quit()
    sys.exit()

# Εκκίνηση μενού
menu()

pygame.quit()
sys.exit()