K enumerate(K a);
K popen_charvec(C *cmd);
K atom(K a);
K mod(K a,K b);
K rotate(K a,K b);
K rotate_mod(K a,K b);
K not_attribute(K a);
K colon_dyadic(K a,K b);
K colon_monadic(K a);
K dot_tetradic(K a,K b,K c,K y);
K at_tetradic(K a,K b,K c,K y);
I atomI(K a);
K at_ref(K *p,K b,K c,K y);
K vf_ex(V q,K g);
I args(int n,S *v);
K specialAmendDot(K c,K args);
extern V offsetSSR,offsetWhat,offsetAt,offsetDot,offsetColon;
I isVerbDyadic(K x,V v);
I isColonDyadic(K x);
I isDotDyadic(K x);
K promote(K a);
K demote(K a);
K dot(K a,K b);
K enlist(K x);
K collapse(K x);
K at_verb(K a,K b);
K _n();
K lookup(K a,S b);
K kap(K *a,V v);
K newK(I t,I n);
K cd(K a);
K newEntry(S s);
K kerr(cS s);
S strdupn(S s,I k);
K *denameRecurse(K *p,S t,I create);
I simpleString(S a);
extern K KTREE;
K *denameD(K *d,S t);
K EV(K e);
K *EAP(K e);
K *EVP(K e);
K *EIA(K a,I i);
K DE(K d,S b);
S ES(K d);
K DI(K d,I i);
S sp(S k);
K glue(K a,K b);
S glueSS(S c,S d);
K Ki(I x);
K Kf(F x);
K Kc(C x);
K Ks(S x);
K ci(K a);
K at(K x,K y);
K itemAtIndex(K a,I i);
K *denameS(S dir_string,S t);
K *lookupEVOrCreate(K *p,S k);
