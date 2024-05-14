# Getting Started
Sample project for development of Sipeed M1s Dock / BL808-DK on Visual Studio Code

### Prerequisites
1. OS: Linux
2. Make
3. Ninja
4. Python
5. Visual Studio Code (Extensions: C/C++ Extension Pack by Microsoft, Python by Microsoft)

### Setup
1. Create a directory for sdk.

    ```
    $ cd ~
    ```
    ```
    $ mkdir -p ~/apps/bouffalo_Labs
    ```
    ```
    $ cd ~/apps/bouffalo_Labs
    ```

2. Clone the Bouffalo SDK in newly created "apps" folder.
    ```
    $ git clone https://github.com/bouffalolab/bouffalo_sdk.git sdk/
    ```
3. Clone the t-head gcc toolchain in "apps" folder.
    ```
    $ git clone https://github.com/bouffalolab/toolchain_gcc_t-head_linux.git toolchain/
    ```
4. Configure environment variables.
    ```
    $ cat <<EOF>> ~/.bashrc
    ```
    ```
    $ export RISCV_TOOLCHAIN=/home/username/apps/bouffalo_Labs/toolchain/bin
    ```
    ```
    $ export BL_SDK_BASE=/home/username/apps/bouffalo_Labs/sdk
    ```
    ```
    $ export PATH=$PATH:$RISCV_TOOLCHAIN
    ```
    ```
    $ EOF
    ```
    ```
    $ source ~/.bashrc
    ```
5. Clone the "bl808_template" repository.
    ```
    $ git clone https://github.com/umarbinzahid/bl808_template.git
    ```
### Compiling
Open the downloaded "bl808_template" folder in vs-code and its cmake extension should pick the project. If prompted for toolchain then select the "RISC-V GCC toolchain 10.2.0".

Click the "build" button on the bottom toolbar of vs-code and it should start compiling the project. The binary file for "D0" core will be created in "build/build_out" folder.

### Flashing
1. Connect the BL808 with UART interface.
2. Place the device in booloader mode by pressing BOOT button then toggling RESET button.
3. In vs-code, press "ctrl+shift+p" and select "Tasks: Run Task". From there select flash and binary should start flashing to device. 
