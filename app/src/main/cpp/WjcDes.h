enum    {ENCRYPT,DECRYPT};

bool Des_Go(char *Out,char *In,long datalen,const char *Key,int keylen,bool Type = ENCRYPT);

