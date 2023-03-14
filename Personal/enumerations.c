#include <stdio.h>

enum Size
{
    Small,
    Medium,
    Large,
    ExtraLarge
};

void main()
{
    enum Size shoeSize;
    shoeSize = ExtraLarge;
    printf("%d", shoeSize);
}
