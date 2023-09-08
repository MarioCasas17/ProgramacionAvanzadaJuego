br : clean compilar ejecutar

compilar : src/main.cpp
	g++ src/main.cpp -o bin/Mascota -I Include

ejecutar: bin/Mascota
	./bin/Mascota

clean : bin/Mascota
	rm bin/Mascota