int a=1,b=10,j,i,c;
printf("\n the first interval is %d",a);
printf("\n the second interval is %d",b);
for(i=a;1<b;++i)
{
 c=0;
for(j=2;j<i/2;++j)
{
if((i%j)==0)
c=1;
}
if(c==0)
{
printf("\n the prime number between two intervals are");
}
}
