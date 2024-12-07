cout << "Masukkan deret nilai ke-n :";
    cin >> n;

    
     for (int i = 1; i <= n ; i++)
     {
        fn = fn_1 + fn_2;
        fn_1 = fn_2;
        fn_2 = fn;
        cout << fn << " ";
     }