#include <stdio.h>

enum Size
{
    Small = 12,
    Medium = 34,
    Large = 45,
    ExtraLarge = 67
};

void main()
{
    enum Size shoeSize1 = Small;
    enum Size shoeSize2 = Medium;
    enum Size shoeSize3 = ExtraLarge;
    // shoeSize = ExtraLarge;
    printf("%d\n", shoeSize1);
    printf("%d\n", shoeSize2);
    printf("%d\n", shoeSize1);
}
