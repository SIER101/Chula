for (auto x : v)
    {
        cout << x.first << " ";
        sort(x.second.begin(), x.second.end());
        for (auto y : x.second)
            cout << y << " ";
        cout << endl;
    }