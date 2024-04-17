void print_char(char c);

void my_print_n_ascii(int howMany)
{
    if(howMany<1)
    {
        return;
    }
    if(howMany>93){
        return;
    }
    for (int i=33;i<=howMany+32;i++){
        print_char(i);

}

int main(void)
{
    my_print_n_ascii(100);
    return 0;
}
