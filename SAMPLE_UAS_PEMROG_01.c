#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	char b [50];
    int pilihan=1, saldo=3000000, tarik, pin, nominal, transfer, isi_pulsa, setoran, s=0, fpin=215226, j=0, npin, nohp, sisa;
    
system("COLOR 9F");
login:
system("cls");
printf("----------SELAMAT DATANG DI ATM BANK JAGO------------");
printf("\n\n(ATM BANG JAGO) by : Leon Hutagaol dan Dipika Syaiban");
printf("\n\n===============MASUKKAN KARTU ATM ANDA===============");
printf("\n\n================INSERT YOUR ATM CARD=================");
getch();

depan:
    system("cls");
    printf("------------- SELAMAT DATANG DI ATM BANK JAGO-----------");
    printf("\n\nPILIH BAHASA");
    printf("\n\nCHOOSE LANGUAGE");

    printf("\n\n1. Indonesia");
    printf("\n\n2. English");
    printf("\n\n= ");
    scanf("%d", &pilihan);
        if(pilihan==1) goto indonesia;
        else if(pilihan==2) goto english;
        else
            goto depan;
indonesia:
    system("cls");
    printf("------------- SELAMAT DATANG DI ATM BANK JAGO-----------");   
pin:
		system("cls");
		printf("MASUKAN PIN ANDA: "); 
		scanf("%d", &pin);
		if (pin==fpin) {
		goto menu;
		}
		else if (s<2) { // diberi kesempatan memasukan PIN sebanyak 3x.
		printf("PIN YANG ANDA MASUKAN SALAH!\n");
		s=s+1;
		getch();
		goto pin;
		system("cls");
		}
		else { // apabila 3x salah memasukan PIN.
		printf ("Anda telah 3x salah memasukan PIN.\n");
		printf("Mohon maaf, account anda telah kami blokir.\n");
		printf("Silahkan hubungi Customer Service kami.\n");
		}
		goto end;
		
menu:
        system("cls");
        printf("-------------SELAMAT DATANG DI ATM BANK JAGO-----------");
        printf("\n\n=========================Menu Utama====================");
        printf("\n\n1. Cek Saldo");
        printf("\n\n2. Tarik Tunai");
        printf("\n\n3. Transfer");
        printf("\n\n4. Isi Pulsa");
        printf("\n\n5. Setoran Tunai");
        printf("\n\n6. Ganti Pin");
        printf("\n\n7. Keluar");
        printf("\n\nMasukan Pilihan : ");
        scanf("%d", &pilihan);
       
        if (pilihan==1) goto saldo;
        else if (pilihan==2) goto tarik;
        else if (pilihan==3) goto transfer;
        else if (pilihan==4) goto isi_pulsa;
        else if (pilihan==5) goto setoran;
        else if (pilihan==6) goto ganti_pin;
        else if (pilihan==7) goto end;
        else
        printf("Masukan Pilihan");
            
saldo:
        system ("cls");
        printf("Saldo anda = %d\n", saldo);
        goto transaksi;

tarik:
        system("cls");
        printf("Masukkan Nominal = ");
        scanf("%d", &tarik);
        printf("\nNominal diambil = %d", tarik);
        printf("\n\nSisa Saldo = %d", saldo=saldo-tarik);
        goto transaksi;

transfer:
        system("cls");
        printf("Masukkan Nama Bank = ");
        scanf("%s", &b);
        printf("Silahkan masukkan nomer rekening tujuan anda = ");
        scanf("%d", &transfer);
        printf("Masukkan nominal yang akan anda tranfer = ");
        scanf("%d", &nominal);
        system("cls");
        printf("Bank Tujuan:%s\n",b);
        printf("Rekening Tujuan:%d\n", transfer);
        printf("Jumlah Transfer:%d\n", nominal);
        printf("Apakah anda akan mentransfer %d ke %d ?", nominal, transfer);
        printf("\n\n1. Ya  2. Tidak\n\n");
        printf("Masukkan pilihan anda = ");
        scanf("%d", &pilihan);       
        if (pilihan==1){
        printf("\nTransaksi Berhasil");
        printf("\n\nSaldo anda sekarang = %d", saldo=saldo-nominal); }
        else 
        printf("\nTransaksi Dibatalkan");
       	goto transaksi;
       			
isi_pulsa:
	system ("cls");
	printf("================================\n");
	printf("DAFTAR HARGA \n");
	printf("================================\n");
	printf("1. 15.000        : Rp. 15.600,-\n");
	printf("2. 30.000        : Rp. 31.500,-\n");
	printf("3. 50.000        : Rp. 52.998,-\n");
	printf("4. 75.000        : Rp. 76.500,-\n");
	printf("5. 100.000       : Rp. 103.410,-\n");
	printf("===============================\n");
	printf("MASUKKAN NO HP   : "); 
	scanf("%d",&nohp);
	printf("PILIH HARGA      : "); 
	scanf("%d",&isi_pulsa);
	switch (isi_pulsa)
	{
	case 1:
	sisa = 3000000-16500;
	printf("\n");
	printf("PEMBELIAN BERHASIL \n");
	printf("\nSISA SALDO ANDA : Rp %d",sisa);
	goto transaksi;
	break;
	
	case 2:
	sisa = 3000000-31500;
	printf("\n");
	printf("\nPEMBELIAN BERHASIL ");
	printf("\nSISA SALDO ANDA : Rp %d",sisa);
	goto transaksi;
	break;	
		
	case 3:	
	sisa = 3000000-52998;
	printf("\n");
	printf("PEMBELIAN BERHASIL \n");
	printf("\nSISA SALDO ANDA : Rp %d",sisa);
	goto transaksi;
	break;
	
	case 4:	
	sisa = 3000000-76500;
	printf("\n");
	printf("PEMBELIAN BERHASIL \n");
	printf("\nSISA SALDO ANDA : Rp %d",sisa);
	goto transaksi;
	break;
	
	case 5:	
	sisa = 3000000-103410;
	printf("\n");
	printf("PEMBELIAN BERHASIL \n");
	printf("\nSISA SALDO ANDA : Rp %d",sisa);
	goto transaksi;
	break;
}

setoran :
		system("cls");
		printf("Masukkan Nominal Yang Akan Disetor =  ");  
        scanf("%d",&setoran);  
        system("cls");
        printf("Nominal Yang Disetor:%d\n",setoran);
        saldo+=setoran;
        system("cls");
        printf("Saldo Anda Sekarang : %d\n",saldo);  
        goto transaksi;

ganti_pin:
	system("cls");
	printf("*************** GANTI PIN ***************\n");
pinlama:
	printf("Masukan PIN lama:"); scanf("%d", &pin);
	if(pin==fpin){
	goto pinbaru;
	}
	else if(j<2){
	printf("PIN LAMA ANDA SALAH!\n");
	j=j+1;
	goto pinlama;
	}
	else{
	printf("AKUN DIBLOKIR! SILAHKAN HUBUNGI CS KAMI.\n");
	goto end;
	}
pinbaru:
	printf("Masukan PIN baru:"); scanf("%d", &npin);
	system("cls");
	fpin=npin;
	printf("*************** GANTI PIN ***************\n");
	printf("Ganti PIN berhasil. Silahkan login kembali.\n");
	getch();
	goto pin;
	
transaksi:
        printf("\n\nApakah anda ingin transaksi lagi?");
        printf("\n\n1. Ya 2. Tidak = ");
        scanf("%d", &pilihan);
        system("cls");
            if (pilihan==1) goto menu;
            if (pilihan==2) goto end;

end:
        system ("cls");
        printf("Terima Kasih\n");
        printf("Atas Kerja Sama Dengan Kami\n\n");
        getch();
        goto selesai;
        
english:
        system("cls");
    printf("--------------WELCOME TO ATM BANK JAGO-----------");   
pin1:
		system("cls");
		printf("Enter PIN : "); 
		scanf("%d", &pin);
		if (pin==fpin) {
		goto menu1;
		}
		else if (s<2) { // diberi kesempatan memasukan PIN sebanyak 3x.
		printf("Wrong PIN\n");
		s=s+1;
		getch();
		goto pin1;
		system("cls");
		}
		else { // apabila 3x salah memasukan PIN.
		printf ("You Have Entered The Wrong PIN 3x\n");
		printf("Account Has Been Blocked\n");
		printf("Please contact our customer service\n");
		}
		goto end1;
    
menu1:
        system("cls");
        printf("------------- WELCOME TO ATM BANK JAGO-----------");
        printf("\n\n====Home====");
        printf("\n\n1. Balance Inquiry");
        printf("\n\n2. Cash Withdrawal");
        printf("\n\n3. Funds Transfer");
        printf("\n\n4. Pulse Recharge");
        printf("\n\n5. Deposit Money");
        printf("\n\n6. Change PIN");
        printf("\n\n7. Exit");
        printf("\n\nInput Your Choice: ");
        scanf("%d", &pilihan);
       
        if (pilihan==1) goto saldo1;
        else if (pilihan==2) goto tarik1;
        else if (pilihan==3) goto transfer1;
        else if (pilihan==4) goto isi_pulsa1;
        else if (pilihan==5) goto setoran1;
        else if (pilihan==6) goto ganti_pin1;
        else if (pilihan==7) goto end1;
        else
        printf("Enter Choice");

saldo1:
        system ("cls");
        printf("Current Balance %d\n\n", saldo);
        goto transaksi1;
        
tarik1:
        system("cls");
        printf("Enter Nominal = ");
        scanf("%d", &tarik);
        printf("Balance Taken = %d", tarik);
        printf("\n\nCurrent Balance = %d", saldo=saldo-tarik);
        goto transaksi1;

transfer1:
        system("cls");
        printf("Bank Destination = ");
        scanf("%s", &b);
        printf("Destination Account = ");
        scanf("%d", &transfer);
        printf("Nominal = ");
        scanf("%d", &nominal);
        system("cls");
        printf("Destination Bank:%s\n",b);
        printf("Destination Account:%d\n", transfer);
        printf("Transfer Amount:%d\n", nominal);
        printf("Transfer %d to %d ?", nominal, transfer);
        printf("\n\n1. Yes  2. No\n\n");
        printf("Enter Your Chooice = ");
        scanf("%d", &pilihan);       
        if (pilihan==1){
        printf("\nTransaction Succes");
        printf("\n\nCurrent Balance = %d", saldo=saldo-nominal); }
        else 
        printf("\nTransaction Aborted");
       	goto transaksi1;
		   			   		
isi_pulsa1:
	system ("cls");
	printf("================================\n");
	printf("PRICE LIST \n");
	printf("================================\n");
	printf("1. 15.000        : Rp. 15.600,-\n");
	printf("2. 30.000        : Rp. 31.500,-\n");
	printf("3. 50.000        : Rp. 52.998,-\n");
	printf("4. 75.000        : Rp. 76.500,-\n");
	printf("5. 100.000       : Rp. 103.410,-\n");
	printf("===============================\n");
	printf("Destination Number   : "); 
	scanf("%d",&nohp);
	printf("Enter Choice      : "); 
	scanf("%d",&isi_pulsa);
	switch (isi_pulsa)
	{
	case 1:
	sisa = 3000000-16500;
	printf("\n");
	printf("Transaction Successful \n");
	printf("\nCurrent Balance : Rp %d",sisa);
	goto transaksi1;
	break;
	
	case 2:
	sisa = 3000000-31500;
	printf("\n");
	printf("\nTransaction Successful ");
	printf("\nCurrent Balance : Rp %d",sisa);
	goto transaksi1;
	break;	
		
	case 3:	
	sisa = 3000000-52998;
	printf("\n");
	printf("Transaction Successful \n");
	printf("\nCurrent Balance : Rp %d",sisa);
	goto transaksi1;
	break;
	
	case 4:	
	sisa = 3000000-76500;
	printf("\n");
	printf("Transaction Successful \n");
	printf("\nCurrent Balance : Rp %d",sisa);
	goto transaksi1;
	break;
	
	case 5:	
	sisa = 3000000-103410;
	printf("\n");
	printf("Transaction Successful \n");
	printf("\nCurrent Balance : Rp %d",sisa);
	goto transaksi1;
	break;
}
			
setoran1:
		system("cls");
		printf("Enter Nominal =  ");  
        scanf("%d",&setoran);  
        system("cls");
        printf("Nominal Deposited:%d\n",setoran);
        saldo+=setoran;
        system("cls");
        printf("Current Balance : %d\n",saldo);  
        goto transaksi1;		
        
ganti_pin1:
	system("cls");
	printf("****************CHANGE PIN****************\n");
pinlama1:
	printf("Enter Previous PIN:"); scanf("%d", &pin);
	if(pin==fpin){
	goto pinbaru;
	}
	else if(j<2){
	printf("Wrong Previous PIN\n");
	j=j+1;
	goto pinlama;
	}
	else{
	printf("ATM Has Been Blocked. Please Contact Our Customer Services\n");
	goto end;
	}
pinbaru1:
	printf("Enter New PIN:"); scanf("%d", &npin);
	system("cls");
	fpin=npin;
	printf("****************CHANGE PIN****************\n");
	printf("PIN Has Been Changed. please re-login\n");
	getch();
	goto pin1;
	
transaksi1:
        printf("\nMake Another transaction ?");
        printf("\n\n1. Yes 2. No = ");
        scanf("%d", &pilihan);
        system("cls");
            if (pilihan==1) goto menu1;
            if (pilihan==2) goto end1;
            
end1:
        system("cls");
        printf("Thanks For\n");
        printf("Banking With Us\n\n");
        getch();
        
selesai:
        puts("");
}
