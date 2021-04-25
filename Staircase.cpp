void staircase(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        std::cout << std::right << std::setfill(' ')
            << std::setw(n) << std::string(i,'#') << std::endl;
    }
}
