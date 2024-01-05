/*For each line of input, print the difference of number of soldiers between Hashmat's army and his opponent's army.
 Each output should be in seperate line.*/
#include <stdio.h>

int main() {
    long long int h, o, d;
    /*limit of int is 2^31-1 but it's said The input numbers are not greater than 2^32
    then where will the number go between 2^31-1 and 2^32 so  we used long long int*/
    while (scanf("%lld%lld", &h, &o)!= EOF)//cut space between %lld or %lld cuz otherwise you can't print 4294967296
    {//loop will take input until you give EOF=End of file
        if(h>o)
        {
            d=h-o;
            printf("%lld\n", d);
        }
        else if(h<=o)
        {//if you don't give = sign then code won't give you output
            d=o-h;
            printf("%lld\n", d);
        }

    }
    return 0;
}
