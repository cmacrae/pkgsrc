# TODO ports for Darwin x86_64 !

- ghc - [yrmt] 
- gcc-48 - [yrmt] - DONE
- valgrind
- g95
- rtorrent - [yrmt] - DONE
- qt4 - [yrmt] - qt4-lib done
- qt5 - [yrmt]
- herbstluftwm - [yrmt] - DONE
- i3 - [yrmt] - DONE
- openbox - [yrmt] - DONE
- subtle
- AwesomeWM - [yrmt] - DONE
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
- wmfs - [yrmt] - DONE
- spectrwm - [yrmt] - DONE
- bspwm - [yrmt] - DONE
- hlwm - [yrmt] - DONE
- monsterwm - [yrmt] - DONE
- stumpwm - [yrmt] - DONE
- xmonad
- i2p
- mpv movie player

- gtk2 - [yrmt] - DONE
- gtk3 - [yrmt] - DONE

- libXtst !! important - [yrmt] - DONE

# Remarks:

- do not have an /opt or /usr/local when compiling ports!
- use this [mk.conf!](http://paste.unixhub.net/index.php/s9wmJ)
- use this [sys/endian.h](https://gist.github.com/yinyin/2027912/raw/06a06632d44db6400a7b006090fcb2f53eca80ee/endian.h)

# pkgsrc instructions: 

###TODO

- link /usr/bin/tar to /usr/bin/gnutar
- links /usr/pkg/include/gettext/libintl.h to /usr/pkg/include/libintl.h


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

──── git status -s|awk -F/ '{gsub(/\?\?\ |\ M\ |\ D\ /,"");print "cd "$1"/"$2"; sudo bmake clean; cd ../../"}'|zsh  
