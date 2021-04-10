void  sieve(int n)
{
    bool prime[n + 1];
    // we can also declare this bool array globally
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
    }
    return prime;
}