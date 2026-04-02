import pygame
import global_variables


# Η ρακέτα του παίκτη
class Racket(pygame.sprite.Sprite):
    def __init__(self, x, y, left_player):
        super().__init__()

        self.image = pygame.Surface((10, 100))
        if left_player==True:
            self.image.fill((0,255,0))
        else:
            self.image.fill((0,0,255))
            
        self.rect = self.image.get_rect()
        self.rect.center = (x, y)
        self.speed = 7
        self.left_player = left_player
        

    def update(self):
        keys = pygame.key.get_pressed()

        # --- Πάνω κάτω αναλόγως τα πλήκτρα και αναλόγως τον παίκτη---
        if self.left_player:
            if keys[pygame.K_w] and self.rect.top > 0:
                self.rect.y -= self.speed
            if keys[pygame.K_s] and self.rect.bottom < global_variables.HEIGHT:
                self.rect.y += self.speed
        else:
            if keys[pygame.K_UP] and self.rect.top > 0:
                self.rect.y -= self.speed
            if keys[pygame.K_DOWN] and self.rect.bottom < global_variables.HEIGHT:
                self.rect.y += self.speed
        

        # --- Αν φτάσει στα όρια της οθόνης ---
        w, h = global_variables.WIDTH, global_variables.HEIGHT
        if self.rect.top < 0:
            self.rect.top = 0
        if self.rect.bottom > h:
            self.rect.bottom = h

