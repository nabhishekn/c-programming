
int a, b, c, d;

int addition()
{   
    c = a+b;
    printf("Addition is %d", c);

    return c;
}

int sub()
{   
    if (a <= b)
    {
        d = b-a;
    }else{
        
        d = a-b;
    }
        printf("\nSubtraction is %d", d);

        return d;
}