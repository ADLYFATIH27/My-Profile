//fungsi running text
void runningText (const char*text, int speedchar){
	 for (int i=0; i<strlen(text);i++){
	 	printf("%c",text[i]);
	 	fflush(stdout);
	 	delay(speedchar); //delay per huruf
    }
    printf("\n");
    delay(1000); //jeda 1 detik antar baris
    
}
    int main(){
    	runningText("Temanku semua pada jahat tanteeee",80);
    	runningText("Aku lagi susah mereka ga adaaa",100);
    	runningText("Coba kalau lagi jayaaa aku di puja puja nya tanteee",100);
    	runningText("Sudah terbiasa terjadi tanteee",80);
    	runningText("Teman datang pas lagi butuh sajaaa",80);
    	runningText("Coba kalau lagi susahhhhh",100);
    	runningText("Mereka semua menghilangggggggggggg",150);
    	runningText("Tanteeeeeeee",90);
    return 0;
	}
