import random
import math
import pygame
import global_variables
from debris import Debris

class Ball(pygame.sprite.Sprite):
    def __init__(self, x, y):
        super().__init__()
        self.image = pygame.Surface((40, 40), pygame.SRCALPHA)
        pygame.draw.circle(self.image, (200,200,0), (20, 20), 20)
        self.rect = self.image.get_rect()
        self.rect.center = (x, y)

        self.pos = pygame.math.Vector2(x, y)

        # Τυχαία κατεύθυνση και ταχύτητα
        self.angle = random.uniform(0, 2 * 3.14159)
        self.speed = 15
        self.vel = pygame.math.Vector2(self.speed * math.cos(self.angle), self.speed * math.sin(self.angle))


        
    def update(self):

        # Κίνηση 
        self.pos += self.vel
        self.rect.center = self.pos

        # --- Αν φτάσει στα όρια της οθόνης ---
        w, h = global_variables.WIDTH, global_variables.HEIGHT

        # Αν φτάσει στα όρια χτύπαει και επιστρέφει
        if self.rect.top < 0 or self.rect.bottom > h:
            self.vel.y *= -1
            
            # Δημιουργία συντριμμιών προς πάνω αριστερά και δεξιά και κάτω αριστερά και δεξιά
            d1 = Debris(self.rect.centerx, self.rect.centery, -self.vel.x * 0.5, -self.vel.y * 0.5)
            d2 = Debris(self.rect.centerx, self.rect.centery, self.vel.x * 0.5, -self.vel.y * 0.5)
            d3 = Debris(self.rect.centerx, self.rect.centery, -self.vel.x * 0.5, self.vel.y * 0.5)
            d4 = Debris(self.rect.centerx, self.rect.centery, self.vel.x * 0.5, self.vel.y * 0.5)
            global_variables.all_sprites.add(d1, d2, d3, d4)
            



       
