a[7];main(x,n){for(;scanf("%d",&n),n;){for(memset(a,0,28);n--;)scanf("%d",&x),x>60?a[6]++:a[x/10]++;for(x=0;x<6;x++)printf("%d\n",a[x]);}exit(0);}