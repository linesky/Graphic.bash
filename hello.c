extern int putss(char *c);
int main(){
    char *c="\ec\e[43;37mhello world\n";
    putss(c);
    return 0;
}
