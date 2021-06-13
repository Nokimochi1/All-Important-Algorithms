void cezar(string &name, int shift){
    for (int i = 0; i < name.length(); i++){
        if (int(name[i]) + shift >= 65 && int(name[i]) + shift <= 90){
            name[i] = char(int(name[i]) + shift);
        }else{
            if(int(name[i]) + shift > 90){
                name[i] = char(int(name[i]) + shift - 90 + 64);
            }else{
                name[i] = char(int(name[i]) + shift + 26);
            }
        }
    }
}
// it has pointer to variable name, u can easilly change it to string type function to return string
