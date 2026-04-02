import pygame
import global_variables

class Debris(pygame.sprite.Sprite):
    def __init__(self, x, y, vel_x, vel_y):
        super().__init__()
        
        self.image = pygame.Surface((15, 15), pygame.SRCALPHA)
        pygame.draw.circle(self.image, (255, 0, 0, 150), (3, 3), 15)
        self.rect = self.image.get_rect(center=(x, y))
        self.vel_x = vel_x
        self.vel_y = vel_y
        self.lifetime = 10  # frames


    def update(self):
        self.rect.x += self.vel_x
        self.rect.y += self.vel_y
        self.lifetime -= 1
        self.image.set_alpha(max(0, int(150 * (self.lifetime / 10))))
        if self.lifetime <= 0:
            self.kill()
