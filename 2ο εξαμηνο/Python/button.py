import pygame


# Χρώματα
GRAY = (150, 150, 150)
DARK_GRAY = (100, 100, 100)
BLACK = (0, 0, 0)

# Γραμματοσειρά
pygame.font.init()
font = pygame.font.SysFont(None, 50)

# Κλάση κουμπιού
class Button(pygame.sprite.Sprite):
    def __init__(self, text, x, y, w, h):
        super().__init__()
        self.text = text
        self.image = pygame.Surface((w, h))
        self.rect = self.image.get_rect(topleft=(x, y))

    def update(self):
        mouse_pos = pygame.mouse.get_pos()
        color = DARK_GRAY if self.rect.collidepoint(mouse_pos) else GRAY
        
        self.image.fill(color)

        text_surf = font.render(self.text, True, BLACK)
        text_rect = text_surf.get_rect(
        center=(self.rect.width // 2, self.rect.height // 2))

        self.image.blit(text_surf, text_rect)

    def clicked(self, event):
        return (
            event.type == pygame.MOUSEBUTTONDOWN
            and event.button == 1
            and self.rect.collidepoint(event.pos)
        )
