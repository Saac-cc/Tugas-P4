#include <stdio.h>

struct Hitbox {
    int x;
    int y;
    int width;
    int height;
};

int isColliding(struct Hitbox *a, struct Hitbox *b) {
    if (a->x + a->width > b->x &&
        a->x < b->x + b->width &&
        a->y + a->height > b->y &&
        a->y < b->y + b->height)
    {
        return 1;
    }
    return 0;
}

int main() {
    struct Hitbox box1, box2;

    printf("Masukkan data hitbox 1 (x y width height): ");
    scanf("%d %d %d %d", &box1.x, &box1.y, &box1.width, &box1.height);

    printf("Masukkan data hitbox 2 (x y width height): ");
    scanf("%d %d %d %d", &box2.x, &box2.y, &box2.width, &box2.height);

    if (isColliding(&box1, &box2)) {
        printf("Terdapat tabrakan antara dua hitbox!\n");
    } else {
        printf("Tidak ada tabrakan antara dua hitbox.\n");
    }

    return 0;
}

