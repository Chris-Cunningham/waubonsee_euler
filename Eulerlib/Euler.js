
function fx(x)
{
    var count=1;
    var rem=0,sq=0;
    sq=(Math.sqrt(x)+1);

    do
    {
        count++;
        rem=x%count;

        if (count>=sq)
        {
            count=x;
            break;
        }
    }while (rem!=0);
    
    return(count);
}
