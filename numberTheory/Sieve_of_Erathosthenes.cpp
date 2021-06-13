vector <int> SieveOfEratosthenes(int n){
    vector <int> sol;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
       
        if (prime[p] == true){
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    
    for (int p = 2; p <= n; p++)
        if (prime[p]){
          sol.push_back(p);
        }
  
    return sol;
}

// O(n*log(log(n))) Returns a Vector of primes from 2 - n
