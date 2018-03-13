rep(i,n){
		tem = a[i] + tem;
		if ((tem>0&&flag)||(tem==0&&!flag)){
			ans2 += tem + 1;
			tem = -1;
		}
		else if((tem<0&&!flag)||(tem==0&&flag)){
			ans2 += 1 - tem;
			tem = 1;
		}
		if (flag) flag = 0;
		else flag = 1;
	}
