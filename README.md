# TODO ports for Darwin x86_64 !

- gcc-49
- valgrind
- g95
- rtorrent
- qt4 - [yrmt] - qt4-lib done
- qt5 - [yrmt]
- herbstluftwm
- i3
- openbox - [yrmt] - DONE
- subtle
- AwesomeWM
- cmus ( non working in ports ) - [akacase]
- R
- tint2
- clang3.3 - [yrmt] - DONE
- infinality
- gdb
- profanity (www.profanity.im) - [yrmt] - DONE
- mcabber - [yrmt] - DONE
- mcwm - [yrmt] - DONE
- 2bwm - [yrmt] - DONE
- urxvt with xft - [yrmt] - DONE
- ctwm - [yrmt] - DONE
- rebuild X ports to use pkgsrc X libraries. - [yrmt] - DONE
- xenoara cwm - [yrmt]  - DONE
- wmfs
- spectrwm
- bspwm
- hlwm
- monsterwm
- i2p

- gtk2 - [yrmt] - DONE
- gtk3

- libXtst !! important - [yrmt] - DONE

# Remarks:

- do not have an /opt or /usr/local when compiling ports!
- use this mk.conf! (/usr/pkg/etc/mk.conf)

http://paste.unixhub.net/index.php/FzWG   

# pkgsrc instructions: 

###Patching ports



`$ pkgvi work/<port>/file.c`    # Creates a backup of the original file    
`$ pkgdiff work/<port>/file.c`  # Prints a unified diff with backup (diff -bu)      
`$ mkpatches`                   # Creates the patches from diff -bu      
`$ bmake mdi`                   # Creates the distinfo file with checksums     
`$ mkpatches -c`                # Cleans the .orig files       



###Installing and making package after changes



`$ bmake CHECK_FILES=no install` # Install without checking files or nothing gets installed     
`$ bmake print-PLIST >PLIST`     # Add installed files to the pist        
`$ bmake deinstall`              # deinstall the package     
`$ bmake install package clean`  # reinstall the port, make a package and clean      



###Creating the buildlink3.mk file



`$ createbuildlink > buildlink3.mk` # This is needed when ports are depends           
