import pygame

import random

import sys



# Αρχικοποίηση του pygame

pygame.init()



# Διαστάσεις οθόνης

WIDTH, HEIGHT = 800, 600

screen = pygame.display.set_mode((WIDTH, HEIGHT))

pygame.display.set_caption("Βασικό Πρόγραμμα Pygame")



# Χρώματα

WHITE = (255, 255, 255)

BLACK = (0, 0, 0)



# Ρολόι για έλεγχο του ρυθμού καρέ

clock = pygame.time.Clock()



# Κύριος βρόχος

running = True

while running:

    for event in pygame.event.get():

        if event.type == pygame.QUIT:

            running = False



    screen.fill((20, 20, 20))  # σκούρο φόντο



    

    # Ενημέρωση της οθόνης

    pygame.display.flip()



    # Περιορισμός του ρυθμού καρέ

    clock.tick(5)



# Τερματισμός του pygame

pygame.quit()

sys.exit()

