int str_cmp(char s1[],char s2[])
{
    int i=0,j=0;
    int flag=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
        if(s1[i]!='\0' || s2[i]!='\0')
        {
            return 1;
        }
        if(flag==0)
            return 0;
        else
            return 1;
}