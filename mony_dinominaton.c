// monay dinomination
#include<stdio.h>
#include<conio.h>
void main()
{
    int rs, a, b, c, d, e, f, g, h ; 
    clrscr() ;
    printf("Enter the amount in Rupees : ") ;
    scanf("%d", &rs) ;
    while(rs >= 500)
    {
        a = rs / 500 ;
        printf("\nThe no. of five hundreds are : %d", a) ;
        break ;
    }
    while(rs >= 100)
    {
        b = rs / 100 ;
        printf("\n\nThe no. of hundreds are : %d", b) ;
        break ;
    }
    while(rs >= 50)
    {
        c = rs / 50 ;
        printf("\n\nThe no. of fifties are : %d", c) ;
        break ;
    }
    while(rs >= 20)
    {
        d = rs / 20 ;
        printf("\n\nThe no. of twenties are : %d", d) ;
        break ;
    }
    while(rs >= 10)
    {
        e = rs / 10 ;
        printf("\n\nThe no. of tens are : %d", e) ;
        break ;
    }
    while(rs >= 5)
    {
        f = rs / 5 ;
        printf("\n\nThe no. of fives are : %d", f) ;
        break ;
    }
    while(rs >= 2)
    {
        g = rs / 2 ;
        printf("\n\nThe no. of Twos are : %d", g) ;
        break ;
    }
    while(rs >= 1)
    {
        h = rs / 1 ;
        printf("\n\nThe no. of ones are : %d", h) ;
        break ;
    }
    getch() ;
}
