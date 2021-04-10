ll binary(vector<ll> &a, ll key)
{
    ll n = a.size();
    ll l = 0, h = n - 1, mid;
    while (l <= h)
    {
        ll mid = (l + h) / 2;

        if (key == a[mid])
            return mid;

        else if (key < a[mid])
            h = mid - 1;

        else
            l = mid + 1;
    }
    return h;
}
