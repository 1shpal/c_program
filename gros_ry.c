// to caculate gross salary

# include<stdio.h>
  float gross_salary(float);
 int main ()
{
float bs,x;
 printf("Enter the salary employee\n");
 scanf("%f",&bs);
 x= gross_salary(bs);
 printf("gross salary =%f",x);
return 0;
}
float gross_salary(float bs){
    float hra,ta,da,gs;
 
    if(bs>10000)
    {
        hra=(bs*10)/100.0f;
        ta=(bs*5)/100.0f;
        da=(bs * 3)/100.0f;
        gs= bs+hra+ta+da;
        printf("\n ta is =%f\n",ta );
        printf("\n da is =%f\n",da);
        printf("\n hra is =%f\n",hra);
                                 
    } 
    else
    {
      hra=(bs*5)/100.0f;
      ta=(bs*3)/100.0f;
      printf("hra is =%f\n",hra);
      printf("ta is =%f\n",ta);
      gs=bs+hra+ta; 
    

    }
 return gs;   
}