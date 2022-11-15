#!/bin/bash

kunci="123456";
read -s -p "Password anda : " pass

if [ $pass -ne $kunci ]
  then 
    echo "Password anda salah!";
  else 
    echo "Login sukses";
    echo "Program Perhitungan"
    echo "1. Tambah"
    echo "2. Kurang"
    echo "3. Kali"
    echo "4. Bagi"
    printf "Masukan pilihan : "
    read pilihan
    clear
    case "$pilihan" in
      "1")
      	printf "Masukan angka pertama : "
      	read a
      	printf "Masukan angka kedua : "
      	read b
        clear
      	let tambah=a+b
        if [ $a -gt $b ]
          then echo "$a > $b"
        elif [ $a -eq $b ]
          then echo "$a == $b"
        else
          echo "$a < $b"
        fi
      	echo "Hasil : $a + $b = $tambah"
      ;;
      "2")
      	printf "Masukan angka pertama : "
      	read a
      	printf "Masukan angka kedua : "
      	read b
      	let tambah=a-b
        if [ $a -gt $b ]
          then echo "$a > $b"
        elif [ $a -eq $b ]
          then echo "$a == $b"
        else
          echo "$a < $b"
        fi
      	echo "Hasil : $a - $b = $tambah"
      ;;
      "3")
      	printf "Masukan angka pertama : "
      	read a
      	printf "Masukan angka kedua : "
      	read b
      	let tambah=a*b
        if [ $a -gt $b ]
          then echo "$a > $b"
        elif [ $a -eq $b ]
          then echo "$a == $b"
        else
          echo "$a < $b"
        fi
      	echo "Hasil : $a x $b = $tambah"
      ;;
      "4")
      	printf "Masukan angka pertama : "
      	read a
      	printf "Masukan angka kedua : "
      	read b
      	let tambah=a/b
        if [ $a -gt $b ]
          then echo "$a > $b"
        elif [ $a -eq $b ]
          then echo "$a == $b"
        else
          echo "$a < $b"
        fi
      	echo "Hasil : $a : $b = $tambah"
      ;;
      *)
        echo "Pilihan tidak ada!"
      ;;
    esac
fi
