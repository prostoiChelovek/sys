xrdb -load $HOME/.Xresources
$HOME/.dwm-status.sh &
xkbcomp -I$HOME/.xkb $HOME/.xkb/my $DISPLAY
exec dwm

