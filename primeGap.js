//codewars kata Gap in Primes
//https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4/train/javascript
//refactored solution that only looks for prime numbers once, and doesn't 
//go through the whole series unless it has to, so, faster.

function isPrime(num) {
    for(var i = 2; i < num; i++)
        if(num % i === 0) return false;
    return num !== 1;
    }


function gap(g, m, n) {
    let prime1, prime2;
    let counter = m;
    var i = m;
    
    //find the first prime in the series, set the variable and never come back here
    for(var i=m; i<n; i++) {
        if(isPrime(i)) {
            counter = i;
            prime1 = i; break;
        }
    }
    if (!prime1) return null;  //if there are no prime numbers in the series
    while(counter <= n) {   //looking for second prime until the end 
        for(let j=prime1+1; j<=n; j++) {
            counter++;
            if(isPrime(j)) {  //found second prime number, break loop
                prime2 = j; break;
            }
        }
        //if we have a correct answer (correct prime gap, return answer)
        if(prime2 - prime1 === g) return ([prime1, prime2]);
        else {  //or else set the 2nd prime as the first one and continue searching for the next prime in series
            prime1 = prime2; continue;
        }
}
    return null;  
}


console.log(gap(10,300,400));


///
        // the following are codewars tests
///

// Test.describe("Gap",function() {
//     Test.it("Basic tests",function() {    
//         Test.assertSimilar(gap(2,100,110), [101, 103]);
//         Test.assertSimilar(gap(4,100,110), [103, 107]);
//         Test.assertSimilar(gap(6,100,110), null);
//         Test.assertSimilar(gap(8,300,400), [359, 367]);
//         Test.assertSimilar(gap(10,300,400), [337, 347]);
//     })})
