function factorialIterative(n:number): number {

    if(n == 0) {
        return 1; 
    }

    let answer:number = n;

    for(let from:number = n; from > 1;from = from - 1) {
        answer *= (from - 1);
    }

    return answer;
}

function factorialRecursive(n: number):number { 
    
    if(n == 0 || n == 1){
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

console.log('Iterative: ', factorialIterative(20));
console.log('Recursive: ', factorialRecursive(5));