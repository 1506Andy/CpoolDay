void print_char(char c);
void my_print_revert(char *toRevert)
{
    int i;
    for (i = 0;toRevert[i]!='\0';i++)
    {
        
    }
    // i est 1 caractère trop loin, d'où i--
    i--;
    while(i>=0){
        print_char (toRevert [i]);
        i--; // on va au précédent
    }

}

