cmd_/home/pasha/Device-Driver-Generic/char_driver/Module.symvers := sed 's/\.ko$$/\.o/' /home/pasha/Device-Driver-Generic/char_driver/modules.order | scripts/mod/modpost -m -a  -o /home/pasha/Device-Driver-Generic/char_driver/Module.symvers -e -i Module.symvers   -T -