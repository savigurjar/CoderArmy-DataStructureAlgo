for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }