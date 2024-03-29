#include <stdio.h>

// struct rectangle
// {
//     int length;
//     int width;
// };

// int main()
// {
//     struct rectangle myRectangle = {5, 10};
//     printf("Length: %d. Width:%d\n", myRectangle.length, myRectangle.width);
//     return 0;
// }

typedef struct
{
    int length;
    int width;
} rectangle;

typedef struct
{
    int x;
    int y;
} position;

typedef struct
{
    char owner[30];
    rectangle rectangle;
    position position;

} buildingPlan;

int main()
{
    rectangle myRectangle = {5, 10};
    printf("Length: %d. Width:%d\n", myRectangle.length, myRectangle.width);

    buildingPlan myHouse = {"Enoch Kambale", {5, 10}, {32, 48}};

    printf("The house at %d %d (size %d %d) is owned by %s\n", myHouse.position.x, myHouse.position.y, myHouse.rectangle.length, myHouse.rectangle.width, myHouse.owner);
}