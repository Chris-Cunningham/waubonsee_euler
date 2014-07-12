
function isPrime(x)
{
    var check = 2;
    var count = 1;
    var rem=0,sq=0;
    sq=(Math.sqrt(x)+1);

    if (x!=0&&x!=1) {
        check=x;
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
    };
    return(count===check);
}

function reverse(s){
    return s.split("").reverse().join("");
}

Array.max = function( array ){
    return Math.max.apply( Math, array );
};