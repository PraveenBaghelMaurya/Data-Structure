    int inp, answer, i = 0;
    cout << "Enter a Number:\t";
    cin >> inp;

    while (inp != 0)
    {
        int bit = (inp & 1);

        answer = (bit * pow(10, i) + answer); // 1*1+0=1=>11
        inp = inp >> 1;
        i++;
    }
    cout << endl
         << "Answer is :\t" << answer;