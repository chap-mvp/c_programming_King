/*--1--*/

// In the following declarations, the x and y structures have members named x and y:
// struct { int x, y; } x;
// struct { int x, y; } y;
// Are these declarations legal on an individual basis? Could both declarations appear as
// shown in a program? Justify your answer.

// Yes, both would be allowed as both structures have unique names.

/*--2-4--*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define PI 3.14159

// a)
typedef struct imaginary_numbers
{
    double real;
    double imaginary;
} complex;

// c)
void value_swapper(struct imaginary_numbers *a, struct imaginary_numbers *b)
{
    struct imaginary_numbers *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

// d)
void value_adder(struct imaginary_numbers *a, struct imaginary_numbers *b, struct imaginary_numbers *c)
{
    c->real = a->real + b->real;
    c->imaginary = a->imaginary + b->imaginary;
}

int task_two()
{

    // b)
    complex c1;
    c1.real = 0.0;
    c1.imaginary = 1.0;

    complex c2;
    c2.real = 1.0;
    c2.imaginary = 0.0;

    complex c3;

    printf("Before swap: c1=(%.1f, %.1f), c2=(%.1f, %.1f)\n", c1.real, c1.imaginary, c2.real, c2.imaginary);
    value_swapper(&c1, &c2);
    printf("After swap: c1=(%.1f, %.1f), c2=(%.1f, %.1f)\n", c1.real, c1.imaginary, c2.real, c2.imaginary);

    value_adder(&c1, &c2, &c3);
    printf("Addition: c3=(%.1f, %.1f)\n", c3.real, c3.imaginary);
}

/*--5--*/

typedef struct date
{
    int day;
    int month;
    int year;
} date;

int day_of_year(struct date *d)
{
    int month_dates[2][12] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
                              {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    if ((d->month < 1) && (d->month > 12))
        return printf("Wrong month!");

    for (int i = 0; i < 1; i++)
        if ((d->day < 1) && (d->day > month_dates[1][d->month]))
            return printf("Wrong Date Count!");

    int days = 0;

    if ((d->year) % 4 == 0)
    {
        for (int i = 0; i < d->month - 1; i++)
            days += month_dates[1][i];
        if (d->month >= 2)
            days += d->day;
        else
            days += d->day;
    }
    else
    {
        for (int i = 0; i < d->month - 1; i++)
            days += month_dates[1][i];
        days += d->day - 1;
    }

    return days;
}

int compare_dates(struct date *d1, struct date *d2)
{
    if (d1->year < d2->year)
        printf("Earlier year");
    else if (d1->year > d2->year)
        printf("Later year");
    else if (d1->month < d2->month)
        printf("Earlier month");
    else if (d1->month > d2->month)
        printf("Later month");
    else if (d1->day < d2->day)
        printf("Earlier day");
    else if (d1->day > d2->day)
        printf("Later day");

    return 0;
}

int task_five()
{
    int or;
    printf("Do you want to get todays day count or compare two dates? ");
    scanf("%d", &or);

    if (or == 0)
    {
        printf("Enter the date dd.mm.yyyy: ");
        date d1;
        scanf("%d.%d.%d", &d1.day, &d1.month, &d1.year);
        printf("Its the %d. day of the year!\n", day_of_year(&d1));

        return 0;
    }
    else
    {
        printf("Enter the first date dd.mm.yyyy: ");
        date d1;
        scanf("%d.%d.%d", &d1.day, &d1.month, &d1.year);

        printf("Enter the comparison date dd.mm.yyyy: ");
        date d2;
        scanf("%d.%d.%d", &d2.day, &d2.month, &d2.year);

        compare_dates(&d1, &d2);
        return 0;
    }
}

/*--6--*/

typedef struct time
{
    long second;
    long minute;
    long hour;
} time;

struct time split_time(long total_seconds)
{
    time a;
    a.hour = total_seconds / (60 * 60);
    a.minute = (total_seconds - (a.hour * 60 * 60)) / 60;
    a.second = total_seconds - (a.hour * 60 * 60) - (a.minute * 60);
    return a;
}

int task_six()
{
    int total_seconds;
    printf("How many seconds have passed? ");
    scanf("%d", &total_seconds);
    struct time split = split_time(total_seconds);

    if (split.hour >= 24)
        return printf("Too large input, max 86400!");

    return printf("%d:%d:%d", split.hour, split.minute, split.second);
}

/*--7--*/

typedef struct fraction
{
    int numerator;
    int denominator;
} fraction;

int gcd_calc(int m, int n)
{
    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}

struct fraction gcd_maker(struct fraction f)
{
    int f_gcd = gcd_calc(f.numerator, f.denominator);
    f.numerator /= f_gcd;
    f.denominator /= f_gcd;
    return f;
}

struct fraction create()
{
    fraction f;
    printf("Enter your fraction a/b: ");
    scanf("%d/%d", &f.numerator, &f.denominator);
    gcd_maker(f);
}

struct fraction add_fractions(struct fraction *f1, struct fraction *f2)
{
    fraction f;

    f.numerator = (f1->numerator) * (f2->denominator) + (f2->numerator) * (f1->denominator);
    f.denominator = (f1->denominator) * (f2->denominator);
    gcd_maker(f);
    return f;
}

struct fraction subtract_fractions(struct fraction *f1, struct fraction *f2)
{
    fraction f;

    f.numerator = (f1->numerator) * (f2->denominator) - (f2->numerator) * (f1->denominator);
    f.denominator = (f1->denominator) * (f2->denominator);
    gcd_maker(f);
    return f;
}

struct fraction multiply_fractions(struct fraction *f1, struct fraction *f2)
{
    fraction f;
    f.numerator = (f1->numerator) * (f2->numerator);
    f.denominator = (f1->denominator) * (f2->denominator);
    gcd_maker(f);
    return f;
}

struct fraction divide_fractions(struct fraction *f1, struct fraction *f2)
{
    fraction f;
    f.numerator = (f1->numerator) * (f2->denominator);
    f.denominator = (f1->denominator) * (f2->numerator);
    gcd_maker(f);
    return f;
}

int task_seven()
{

    fraction f1 = create();
    fraction f2 = create();

    fraction f;

    f = add_fractions(&f1, &f2);
    printf("Added fracions: %d/%d\n", f.numerator, f.denominator);

    f = subtract_fractions(&f1, &f2);
    printf("Subtracted fracions: %d/%d\n", f.numerator, f.denominator);

    f = multiply_fractions(&f1, &f2);
    printf("Multiplied fracions: %d/%d\n", f.numerator, f.denominator);

    f = divide_fractions(&f1, &f2);
    printf("Divided fracions: %d/%d\n", f.numerator, f.denominator);
}

/*--8--*/

struct color
{
    int r;
    int g;
    int b;
};

int task_eight()
{
    const struct color magenta = {255, 0, 255};
    // const struct color magenta = {.r = 255, .b = 255};
}

/*--9--*/

int color_setter(int *a)
{
    if (*a < 0)
    {
        *a = 0;
    }
    else if (*a > 255)
    {
        *a = 255;
    }
    return *a;
}

struct color make_color()
{
    struct color palette;

    printf("Enter the RGB values r/g/b - ");
    scanf("%d/%d/%d", &palette.r, &palette.g, &palette.b);

    color_setter(&palette.r);
    printf("R: %d\n", palette.r);

    color_setter(&palette.g);
    printf("G: %d\n", palette.g);

    color_setter(&palette.b);
    printf("B: %d\n", palette.b);

    return palette;
}

int getRed(struct color c)
{
    return c.r;
}

bool equal_color(struct color color1)
{
    struct color color2 = make_color();
    printf("RGB: %d, %d, %d\n", color2.r, color2.g, color2.b);
    return ((color1.r == color2.r) && (color1.g == color2.g) && (color1.b == color2.b));
}

struct color brighter(struct color c)
{

    if ((c.r == 0) || (c.r <= 3))
        c.r = 3;
    if ((c.g == 0) || (c.g <= 3))
        c.g = 3;
    if ((c.b == 0) || (c.b <= 3))
        c.b = 3;

    c.r /= 0.7;
    color_setter(&c.r);
    c.g /= 0.7;
    color_setter(&c.g);
    c.b /= 0.7;
    color_setter(&c.b);

    return c;
}

struct color darker(struct color c)
{

    if ((c.r == 0) || (c.r <= 3))
        c.r = 3;
    if ((c.g == 0) || (c.g <= 3))
        c.g = 3;
    if ((c.b == 0) || (c.b <= 3))
        c.b = 3;

    c.r *= 0.7;
    color_setter(&c.r);
    c.g *= 0.7;
    color_setter(&c.g);
    c.b *= 0.7;
    color_setter(&c.b);

    return c;
}

int task_nine()
{
    struct color palette = make_color();
    printf("RGB: %d, %d, %d\n", palette.r, palette.g, palette.b);
    printf("The red value is: %d", getRed(palette));
    equal_color(palette) ? printf("Same colors!\n") : printf("Not the same colors!\n");

    struct color newPalette = brighter(palette);
    printf("Brighter RGB: %d, %d, %d\n", newPalette.r, newPalette.g, newPalette.b);

    newPalette = darker(palette);
    printf("Darker RGB: %d, %d, %d\n", newPalette.r, newPalette.g, newPalette.b);
}

/*--10--*/

struct point
{
    int x, y;
};

struct rectangle // first = {12, 13, 14, 15}
{
    struct point top_left;
    struct point bot_right;
};

int area(int tx, int ty, int bx, int by)
{
    return abs(tx - bx) * abs(ty - by);
}

struct point centre_calc(int tx, int ty, int bx, int by)
{
    struct point centre;
    centre.x = abs(bx + tx) / 2;
    centre.y = abs(by + ty) / 2;
    return centre;
}

struct point moved_centre_calc(struct rectangle *new_coordinates, struct rectangle *coordinates, struct point centre, int move_x, int move_y)
{
    struct point new_centre;
    new_centre.x = centre.x + move_x;
    new_centre.y = centre.y + move_y;

    new_coordinates->top_left.x = coordinates->top_left.x + move_x;
    new_coordinates->top_left.y = coordinates->top_left.y + move_y;
    new_coordinates->bot_right.x = coordinates->bot_right.x + move_x;
    new_coordinates->bot_right.y = coordinates->bot_right.y + move_y;

    return new_centre;
}

bool point_check(int x, int y, struct rectangle new_coordinates)
{
    if ((x >= new_coordinates.top_left.x && x <= new_coordinates.bot_right.x) && y <= new_coordinates.top_left.y && y >= new_coordinates.bot_right.y)
        return 1;
    return 0;
}

int task_ten()
{
    int tx, ty, bx, by;

    printf("Enter the upper left coordinates x, y: ");
    scanf("%d, %d", &tx, &ty);
    printf("Enter the bottom right coordinates x, y: ");
    scanf("%d, %d", &bx, &by);

    struct rectangle coordinates = {tx, ty, bx, by};

    printf("The area is %d\n", area(tx, ty, bx, by));

    struct point centre = centre_calc(tx, ty, bx, by);
    printf("The centre is at: %d, %d\n", centre.x, centre.y);

    int move_x, move_y;
    printf("How much do you want to move the rectangle by x, y?");
    scanf("%d, %d", &move_x, &move_y);
    struct rectangle new_coordinates;
    struct point new_centre = moved_centre_calc(&new_coordinates, &coordinates, centre, move_x, move_y);
    printf("The centre has moved to %d, %d?\n", new_centre.x, new_centre.y);

    printf("The new top left coordinates are %d, %d\n", new_coordinates.top_left.x, new_coordinates.top_left.y);
    printf("The new bottom right coordinates are %d, %d\n", new_coordinates.bot_right.x, new_coordinates.bot_right.y);

    int x, y;
    printf("Enter the point which you would like to check is inside the rectangle x, y: \n");
    scanf("%d, %d", &x, &y);

    point_check(x, y, new_coordinates) ? printf("Inside!") : printf("Not inside");
}

/*--11--*/

// struct
// {
//     double a;
//     union
//     {
//         char b[4];
//         double c;
//         int d;
//     } e;
//     char f[4];
// } s;

// 17 (8 + 8 + 1)

/*--12--*/

// union
// {
//     double a;
//     struct
//     {
//         char b[4];
//         double c;
//         int d;
//     } e;
//     char f[4];
// } u;

// 13 (1 + 8 + 4)

/*--13--*/

struct shape
{
    int shape_kind;      /* RECTANGLE or CIRCLE */
    struct point center; /* coordinates of center */
    union
    {
        struct
        {
            int height, width;
        } rectangle;
        struct
        {
            int radius;
        } circle;
    } u;
} s;

// (a) s.shape_kind = RECTANGLE; ✓ -> s.shape_kind = 'RECTANGLE';
// (b) s.center.x = 10;          ✓
// (c) s.height = 25;            ✗ -> s.u.rectangle.height = 25;
// (d) s.u.rectangle.width = 8;  ✓
// (e) s.u.circle = 5;           ✗ -> s.u.circle.radius = 5;
// (f) s.u.radius = 5;           ✗ -> no circle tag!

/*--14--*/

int area_calc(int comp)
{
    s.shape_kind = comp;

    if (s.shape_kind == 0)
    {
        printf("Height: ");
        scanf("%d", &s.u.rectangle.height);
        printf("Width: ");
        scanf("%d", &s.u.rectangle.width);
    }
    if (s.shape_kind == 1)
    {
        printf("Radius: ");
        scanf("%d", &s.u.circle.radius);
    }

    int area;
    if (s.shape_kind == 0)
        area = s.u.rectangle.height * s.u.rectangle.width;
    else if (s.shape_kind == 1)
        area = PI * pow((s.u.circle.radius), 2);
    return area;
}

int main()
{
    int comp;
    printf("Enter 0 for rectangle, 1 for circle: ");
    scanf("%d", &comp);
    printf("Area: %d\n", area_calc(comp));
}