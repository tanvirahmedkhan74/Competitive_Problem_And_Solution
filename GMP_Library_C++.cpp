#include<iostream>
#include <gmp.h>

typedef long long int ll;
int main(){

    ll n;
    std::cin >> n;

    mpz_t sum,temp,summation,numerator,denom,ans; // Declaring Variables
    //Initializing Variables

    mpz_init(sum);
    mpz_init(temp);
    mpz_set_ui(temp,0); //Setting inital value
    mpz_init(summation);

    mpz_init(numerator);
    mpz_set_ui(numerator,(n*(n+1)));

    mpz_init(denom);
    mpz_init(ans);
    mpz_set_ui(denom,2);
    //

    for(int i=0;i<n-1;i++){
        gmp_scanf("%Zd",&temp); //Scanning Input Value
        mpz_add(sum,sum,temp); //Add numbers to (first,second,thrid) first argument second+third
    }
    mpz_div(summation,numerator,denom); //Division

    mpz_sub(ans,summation,sum); //Subtraction

    gmp_printf("%Zd",ans); //Printing Value

}
