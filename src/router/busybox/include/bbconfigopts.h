#ifndef _BBCONFIG_H
#define _BBCONFIG_H
/*
 * busybox configuration options.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 * NON INFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 *
 * This file is generated automatically by scripts/config/mkconfigs.
 * Do not edit.
 *
 */
static char const bbconfig_config[] =
"CONFIG_BEGIN=n\n\
CONFIG_FEATURE_BUFFERS_USE_MALLOC=y\n\
# CONFIG_FEATURE_BUFFERS_GO_ON_STACK is not set\n\
# CONFIG_FEATURE_BUFFERS_GO_IN_BSS is not set\n\
CONFIG_FEATURE_VERBOSE_USAGE=y\n\
CONFIG_FEATURE_INSTALLER=y\n\
CONFIG_LOCALE_SUPPORT=y\n\
# CONFIG_FEATURE_DEVFS is not set\n\
CONFIG_FEATURE_DEVPTS=y\n\
# CONFIG_FEATURE_CLEAN_UP is not set\n\
CONFIG_FEATURE_SUID=y\n\
CONFIG_FEATURE_SUID_CONFIG=y\n\
CONFIG_FEATURE_SUID_CONFIG_QUIET=y\n\
# CONFIG_SELINUX is not set\n\
# CONFIG_STATIC is not set\n\
# CONFIG_DISABLE_SHARED is not set\n\
# CONFIG_BUILD_LIBBUSYBOX is not set\n\
# CONFIG_FEATURE_FULL_LIBBUSYBOX is not set\n\
# CONFIG_FEATURE_SHARED_BUSYBOX is not set\n\
CONFIG_LFS=y\n\
# CONFIG_BUILD_AT_ONCE is not set\n\
# CONFIG_DEBUG is not set\n\
# CONFIG_NO_DEBUG_LIB is not set\n\
# CONFIG_DMALLOC is not set\n\
# CONFIG_EFENCE is not set\n\
# CONFIG_DEBUG_YANK_SUSv2 is not set\n\
# CONFIG_INSTALL_NO_USR is not set\n\
CONFIG_INSTALL_APPLET_SYMLINKS=y\n\
# CONFIG_INSTALL_APPLET_HARDLINKS is not set\n\
# CONFIG_INSTALL_APPLET_DONT is not set\n\
CONFIG_MD5_SIZE_VS_SPEED=2\n\
CONFIG_AR=y\n\
CONFIG_FEATURE_AR_LONG_FILENAMES=y\n\
CONFIG_BUNZIP2=y\n\
CONFIG_CPIO=y\n\
CONFIG_DPKG=y\n\
CONFIG_DPKG_DEB=y\n\
CONFIG_FEATURE_DPKG_DEB_EXTRACT_ONLY=y\n\
CONFIG_GUNZIP=y\n\
CONFIG_FEATURE_GUNZIP_UNCOMPRESS=y\n\
CONFIG_GZIP=y\n\
CONFIG_RPM2CPIO=y\n\
CONFIG_RPM=y\n\
CONFIG_TAR=y\n\
CONFIG_FEATURE_TAR_CREATE=y\n\
CONFIG_FEATURE_TAR_BZIP2=y\n\
CONFIG_FEATURE_TAR_LZMA=y\n\
CONFIG_FEATURE_TAR_FROM=y\n\
CONFIG_FEATURE_TAR_GZIP=y\n\
CONFIG_FEATURE_TAR_COMPRESS=y\n\
CONFIG_FEATURE_TAR_OLDGNU_COMPATABILITY=y\n\
CONFIG_FEATURE_TAR_GNU_EXTENSIONS=y\n\
CONFIG_FEATURE_TAR_LONG_OPTIONS=y\n\
CONFIG_UNCOMPRESS=y\n\
CONFIG_UNLZMA=y\n\
CONFIG_FEATURE_LZMA_FAST=y\n\
CONFIG_UNZIP=y\n\
CONFIG_FEATURE_UNARCHIVE_TAPE=y\n\
CONFIG_FEATURE_DEB_TAR_GZ=y\n\
CONFIG_FEATURE_DEB_TAR_BZ2=y\n\
CONFIG_FEATURE_DEB_TAR_LZMA=y\n\
CONFIG_BASENAME=y\n\
CONFIG_CAL=y\n\
CONFIG_CAT=y\n\
CONFIG_CHGRP=y\n\
CONFIG_CHMOD=y\n\
CONFIG_CHOWN=y\n\
CONFIG_CHROOT=y\n\
CONFIG_CMP=y\n\
CONFIG_COMM=y\n\
CONFIG_CP=y\n\
CONFIG_CUT=y\n\
CONFIG_DATE=y\n\
CONFIG_FEATURE_DATE_ISOFMT=y\n\
CONFIG_DD=y\n\
CONFIG_DF=y\n\
CONFIG_DIRNAME=y\n\
CONFIG_DOS2UNIX=y\n\
CONFIG_UNIX2DOS=y\n\
CONFIG_DU=y\n\
CONFIG_FEATURE_DU_DEFALT_BLOCKSIZE_1K=y\n\
CONFIG_ECHO=y\n\
CONFIG_FEATURE_FANCY_ECHO=y\n\
CONFIG_ENV=y\n\
CONFIG_EXPR=y\n\
CONFIG_EXPR_MATH_SUPPORT_64=y\n\
CONFIG_FALSE=y\n\
CONFIG_FOLD=y\n\
CONFIG_HEAD=y\n\
CONFIG_FEATURE_FANCY_HEAD=y\n\
CONFIG_HOSTID=y\n\
CONFIG_ID=y\n\
CONFIG_INSTALL=y\n\
CONFIG_LENGTH=y\n\
CONFIG_LN=y\n\
CONFIG_LOGNAME=y\n\
CONFIG_LS=y\n\
CONFIG_FEATURE_LS_FILETYPES=y\n\
CONFIG_FEATURE_LS_FOLLOWLINKS=y\n\
CONFIG_FEATURE_LS_RECURSIVE=y\n\
CONFIG_FEATURE_LS_SORTFILES=y\n\
CONFIG_FEATURE_LS_TIMESTAMPS=y\n\
CONFIG_FEATURE_LS_USERNAME=y\n\
CONFIG_FEATURE_LS_COLOR=y\n\
CONFIG_FEATURE_LS_COLOR_IS_DEFAULT=y\n\
CONFIG_MD5SUM=y\n\
CONFIG_MKDIR=y\n\
CONFIG_MKFIFO=y\n\
CONFIG_MKNOD=y\n\
CONFIG_MV=y\n\
CONFIG_NICE=y\n\
CONFIG_NOHUP=y\n\
CONFIG_OD=y\n\
CONFIG_PRINTENV=y\n\
CONFIG_PRINTF=y\n\
CONFIG_PWD=y\n\
CONFIG_REALPATH=y\n\
CONFIG_RM=y\n\
CONFIG_RMDIR=y\n\
CONFIG_SEQ=y\n\
CONFIG_SHA1SUM=y\n\
CONFIG_SLEEP=y\n\
CONFIG_FEATURE_FANCY_SLEEP=y\n\
CONFIG_SORT=y\n\
CONFIG_FEATURE_SORT_BIG=y\n\
CONFIG_STAT=y\n\
CONFIG_FEATURE_STAT_FORMAT=y\n\
CONFIG_STTY=y\n\
CONFIG_SUM=y\n\
CONFIG_SYNC=y\n\
CONFIG_TAIL=y\n\
CONFIG_FEATURE_FANCY_TAIL=y\n\
CONFIG_TEE=y\n\
CONFIG_FEATURE_TEE_USE_BLOCK_IO=y\n\
CONFIG_TEST=y\n\
CONFIG_FEATURE_TEST_64=y\n\
CONFIG_TOUCH=y\n\
CONFIG_TR=y\n\
CONFIG_FEATURE_TR_CLASSES=y\n\
CONFIG_FEATURE_TR_EQUIV=y\n\
CONFIG_TRUE=y\n\
CONFIG_TTY=y\n\
CONFIG_UNAME=y\n\
CONFIG_UNIQ=y\n\
CONFIG_USLEEP=y\n\
CONFIG_UUDECODE=y\n\
CONFIG_UUENCODE=y\n\
CONFIG_WATCH=y\n\
CONFIG_WC=y\n\
CONFIG_WHO=y\n\
CONFIG_WHOAMI=y\n\
CONFIG_YES=y\n\
CONFIG_FEATURE_PRESERVE_HARDLINKS=y\n\
CONFIG_FEATURE_AUTOWIDTH=y\n\
CONFIG_FEATURE_HUMAN_READABLE=y\n\
CONFIG_FEATURE_MD5_SHA1_SUM_CHECK=y\n\
CONFIG_CHVT=y\n\
CONFIG_CLEAR=y\n\
CONFIG_DEALLOCVT=y\n\
CONFIG_DUMPKMAP=y\n\
CONFIG_LOADFONT=y\n\
CONFIG_LOADKMAP=y\n\
CONFIG_OPENVT=y\n\
CONFIG_RESET=y\n\
CONFIG_SETCONSOLE=y\n\
CONFIG_SETKEYCODES=y\n\
CONFIG_MKTEMP=y\n\
CONFIG_PIPE_PROGRESS=y\n\
CONFIG_READLINK=y\n\
CONFIG_FEATURE_READLINK_FOLLOW=y\n\
CONFIG_RUN_PARTS=y\n\
CONFIG_START_STOP_DAEMON=y\n\
CONFIG_WHICH=y\n\
CONFIG_AWK=y\n\
CONFIG_FEATURE_AWK_MATH=y\n\
CONFIG_PATCH=y\n\
CONFIG_SED=y\n\
CONFIG_VI=y\n\
CONFIG_FEATURE_VI_COLON=y\n\
CONFIG_FEATURE_VI_YANKMARK=y\n\
CONFIG_FEATURE_VI_SEARCH=y\n\
CONFIG_FEATURE_VI_USE_SIGNALS=y\n\
CONFIG_FEATURE_VI_DOT_CMD=y\n\
CONFIG_FEATURE_VI_READONLY=y\n\
CONFIG_FEATURE_VI_SETOPTS=y\n\
CONFIG_FEATURE_VI_SET=y\n\
CONFIG_FEATURE_VI_WIN_RESIZE=y\n\
CONFIG_FEATURE_VI_OPTIMIZE_CURSOR=y\n\
CONFIG_FIND=y\n\
CONFIG_FEATURE_FIND_MTIME=y\n\
CONFIG_FEATURE_FIND_MMIN=y\n\
CONFIG_FEATURE_FIND_PERM=y\n\
CONFIG_FEATURE_FIND_TYPE=y\n\
CONFIG_FEATURE_FIND_XDEV=y\n\
CONFIG_FEATURE_FIND_NEWER=y\n\
CONFIG_FEATURE_FIND_INUM=y\n\
CONFIG_FEATURE_FIND_EXEC=y\n\
CONFIG_GREP=y\n\
CONFIG_FEATURE_GREP_EGREP_ALIAS=y\n\
CONFIG_FEATURE_GREP_FGREP_ALIAS=y\n\
CONFIG_FEATURE_GREP_CONTEXT=y\n\
CONFIG_XARGS=y\n\
CONFIG_FEATURE_XARGS_SUPPORT_CONFIRMATION=y\n\
CONFIG_FEATURE_XARGS_SUPPORT_QUOTES=y\n\
CONFIG_FEATURE_XARGS_SUPPORT_TERMOPT=y\n\
CONFIG_FEATURE_XARGS_SUPPORT_ZERO_TERM=y\n\
CONFIG_INIT=y\n\
CONFIG_FEATURE_USE_INITTAB=y\n\
CONFIG_FEATURE_INIT_SCTTY=y\n\
CONFIG_FEATURE_EXTRA_QUIET=y\n\
CONFIG_FEATURE_INIT_COREDUMPS=y\n\
CONFIG_FEATURE_INITRD=y\n\
CONFIG_HALT=y\n\
CONFIG_MESG=y\n\
CONFIG_FEATURE_SHADOWPASSWDS=y\n\
CONFIG_USE_BB_SHADOW=y\n\
CONFIG_USE_BB_PWD_GRP=y\n\
CONFIG_ADDGROUP=y\n\
CONFIG_DELGROUP=y\n\
CONFIG_ADDUSER=y\n\
CONFIG_DELUSER=y\n\
CONFIG_GETTY=y\n\
CONFIG_FEATURE_UTMP=y\n\
CONFIG_FEATURE_WTMP=y\n\
CONFIG_LOGIN=y\n\
CONFIG_FEATURE_SECURETTY=y\n\
CONFIG_PASSWD=y\n\
CONFIG_SU=y\n\
CONFIG_SULOGIN=y\n\
CONFIG_VLOCK=y\n\
CONFIG_CHATTR=y\n\
CONFIG_E2FSCK=y\n\
CONFIG_FSCK=y\n\
CONFIG_LSATTR=y\n\
CONFIG_MKE2FS=y\n\
CONFIG_TUNE2FS=y\n\
CONFIG_E2LABEL=y\n\
CONFIG_FINDFS=y\n\
CONFIG_INSMOD=y\n\
CONFIG_FEATURE_INSMOD_VERSION_CHECKING=y\n\
CONFIG_FEATURE_INSMOD_KSYMOOPS_SYMBOLS=y\n\
CONFIG_FEATURE_INSMOD_LOADINKMEM=y\n\
CONFIG_FEATURE_INSMOD_LOAD_MAP=y\n\
CONFIG_FEATURE_INSMOD_LOAD_MAP_FULL=y\n\
CONFIG_RMMOD=y\n\
CONFIG_LSMOD=y\n\
CONFIG_FEATURE_LSMOD_PRETTY_2_6_OUTPUT=y\n\
CONFIG_MODPROBE=y\n\
CONFIG_FEATURE_MODPROBE_MULTIPLE_OPTIONS=y\n\
CONFIG_FEATURE_CHECK_TAINTED_MODULE=y\n\
CONFIG_FEATURE_2_4_MODULES=y\n\
CONFIG_FEATURE_2_6_MODULES=y\n\
# CONFIG_FEATURE_QUERY_MODULE_INTERFACE is not set\n\
CONFIG_DMESG=y\n\
CONFIG_FBSET=y\n\
CONFIG_FEATURE_FBSET_FANCY=y\n\
CONFIG_FEATURE_FBSET_READMODE=y\n\
CONFIG_FDFLUSH=y\n\
CONFIG_FDFORMAT=y\n\
CONFIG_FDISK=y\n\
CONFIG_FEATURE_FDISK_WRITABLE=y\n\
CONFIG_FEATURE_AIX_LABEL=y\n\
CONFIG_FEATURE_SGI_LABEL=y\n\
CONFIG_FEATURE_SUN_LABEL=y\n\
CONFIG_FEATURE_OSF_LABEL=y\n\
CONFIG_FEATURE_FDISK_ADVANCED=y\n\
CONFIG_FREERAMDISK=y\n\
CONFIG_FSCK_MINIX=y\n\
CONFIG_MKFS_MINIX=y\n\
CONFIG_FEATURE_MINIX2=y\n\
CONFIG_GETOPT=y\n\
CONFIG_HEXDUMP=y\n\
CONFIG_HWCLOCK=y\n\
CONFIG_FEATURE_HWCLOCK_LONGOPTIONS=y\n\
CONFIG_FEATURE_HWCLOCK_ADJTIME_FHS=y\n\
CONFIG_IPCRM=y\n\
CONFIG_IPCS=y\n\
CONFIG_LOSETUP=y\n\
CONFIG_MDEV=y\n\
CONFIG_FEATURE_MDEV_CONF=y\n\
CONFIG_MKSWAP=y\n\
CONFIG_MORE=y\n\
CONFIG_FEATURE_USE_TERMIOS=y\n\
CONFIG_MOUNT=y\n\
CONFIG_FEATURE_MOUNT_NFS=y\n\
CONFIG_PIVOT_ROOT=y\n\
CONFIG_RDATE=y\n\
CONFIG_READPROFILE=y\n\
CONFIG_SETARCH=y\n\
CONFIG_SWAPONOFF=y\n\
CONFIG_SWITCH_ROOT=y\n\
CONFIG_UMOUNT=y\n\
CONFIG_FEATURE_UMOUNT_ALL=y\n\
CONFIG_FEATURE_MOUNT_LOOP=y\n\
# CONFIG_FEATURE_MTAB_SUPPORT is not set\n\
CONFIG_ADJTIMEX=y\n\
CONFIG_BBCONFIG=y\n\
CONFIG_CROND=y\n\
CONFIG_FEATURE_CROND_CALL_SENDMAIL=y\n\
CONFIG_CRONTAB=y\n\
CONFIG_DC=y\n\
CONFIG_DEVFSD=y\n\
CONFIG_DEVFSD_MODLOAD=y\n\
CONFIG_DEVFSD_FG_NP=y\n\
CONFIG_DEVFSD_VERBOSE=y\n\
CONFIG_EJECT=y\n\
CONFIG_LAST=y\n\
CONFIG_LESS=y\n\
CONFIG_FEATURE_LESS_BRACKETS=y\n\
CONFIG_FEATURE_LESS_FLAGS=y\n\
CONFIG_FEATURE_LESS_FLAGCS=y\n\
CONFIG_FEATURE_LESS_MARKS=y\n\
CONFIG_FEATURE_LESS_REGEXP=y\n\
CONFIG_HDPARM=y\n\
CONFIG_FEATURE_HDPARM_GET_IDENTITY=y\n\
CONFIG_FEATURE_HDPARM_HDIO_SCAN_HWIF=y\n\
CONFIG_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF=y\n\
CONFIG_FEATURE_HDPARM_HDIO_DRIVE_RESET=y\n\
CONFIG_FEATURE_HDPARM_HDIO_TRISTATE_HWIF=y\n\
CONFIG_FEATURE_HDPARM_HDIO_GETSET_DMA=y\n\
CONFIG_MAKEDEVS=y\n\
# CONFIG_FEATURE_MAKEDEVS_LEAF is not set\n\
CONFIG_FEATURE_MAKEDEVS_TABLE=y\n\
CONFIG_MOUNTPOINT=y\n\
CONFIG_MT=y\n\
CONFIG_RUNLEVEL=y\n\
CONFIG_RX=y\n\
CONFIG_STRINGS=y\n\
CONFIG_SETSID=y\n\
CONFIG_TIME=y\n\
CONFIG_WATCHDOG=y\n\
CONFIG_FEATURE_IPV6=y\n\
CONFIG_ARPING=y\n\
CONFIG_DNSD=y\n\
CONFIG_ETHER_WAKE=y\n\
CONFIG_FAKEIDENTD=y\n\
CONFIG_FTPGET=y\n\
CONFIG_FTPPUT=y\n\
CONFIG_HOSTNAME=y\n\
CONFIG_HTTPD=y\n\
CONFIG_FEATURE_HTTPD_USAGE_FROM_INETD_ONLY=y\n\
CONFIG_FEATURE_HTTPD_BASIC_AUTH=y\n\
CONFIG_FEATURE_HTTPD_AUTH_MD5=y\n\
# CONFIG_FEATURE_HTTPD_RELOAD_CONFIG_SIGHUP is not set\n\
# CONFIG_FEATURE_HTTPD_SETUID is not set\n\
CONFIG_FEATURE_HTTPD_CONFIG_WITH_MIME_TYPES=y\n\
CONFIG_FEATURE_HTTPD_CGI=y\n\
CONFIG_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR=y\n\
CONFIG_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV=y\n\
CONFIG_FEATURE_HTTPD_ENCODE_URL_STR=y\n\
CONFIG_IFCONFIG=y\n\
CONFIG_FEATURE_IFCONFIG_STATUS=y\n\
CONFIG_FEATURE_IFCONFIG_SLIP=y\n\
CONFIG_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ=y\n\
CONFIG_FEATURE_IFCONFIG_HW=y\n\
CONFIG_FEATURE_IFCONFIG_BROADCAST_PLUS=y\n\
CONFIG_IFUPDOWN=y\n\
CONFIG_FEATURE_IFUPDOWN_IP=y\n\
CONFIG_FEATURE_IFUPDOWN_IP_BUILTIN=y\n\
CONFIG_FEATURE_IFUPDOWN_IPV4=y\n\
CONFIG_FEATURE_IFUPDOWN_IPV6=y\n\
CONFIG_FEATURE_IFUPDOWN_IPX=y\n\
CONFIG_FEATURE_IFUPDOWN_MAPPING=y\n\
CONFIG_INETD=y\n\
CONFIG_FEATURE_INETD_SUPPORT_BILTIN_ECHO=y\n\
CONFIG_FEATURE_INETD_SUPPORT_BILTIN_DISCARD=y\n\
CONFIG_FEATURE_INETD_SUPPORT_BILTIN_TIME=y\n\
CONFIG_FEATURE_INETD_SUPPORT_BILTIN_DAYTIME=y\n\
CONFIG_FEATURE_INETD_SUPPORT_BILTIN_CHARGEN=y\n\
CONFIG_FEATURE_INETD_RPC=y\n\
CONFIG_IP=y\n\
CONFIG_FEATURE_IP_ADDRESS=y\n\
CONFIG_FEATURE_IP_LINK=y\n\
CONFIG_FEATURE_IP_ROUTE=y\n\
CONFIG_FEATURE_IP_TUNNEL=y\n\
CONFIG_IPCALC=y\n\
CONFIG_FEATURE_IPCALC_FANCY=y\n\
CONFIG_IPADDR=y\n\
CONFIG_IPLINK=y\n\
CONFIG_IPROUTE=y\n\
CONFIG_IPTUNNEL=y\n\
CONFIG_NAMEIF=y\n\
CONFIG_NC=y\n\
CONFIG_NC_GAPING_SECURITY_HOLE=y\n\
CONFIG_NETSTAT=y\n\
CONFIG_NSLOOKUP=y\n\
CONFIG_PING=y\n\
CONFIG_FEATURE_FANCY_PING=y\n\
CONFIG_PING6=y\n\
CONFIG_FEATURE_FANCY_PING6=y\n\
CONFIG_ROUTE=y\n\
CONFIG_TELNET=y\n\
CONFIG_FEATURE_TELNET_TTYPE=y\n\
CONFIG_FEATURE_TELNET_AUTOLOGIN=y\n\
CONFIG_TELNETD=y\n\
CONFIG_FEATURE_TELNETD_INETD=y\n\
CONFIG_TFTP=y\n\
CONFIG_FEATURE_TFTP_GET=y\n\
CONFIG_FEATURE_TFTP_PUT=y\n\
CONFIG_FEATURE_TFTP_BLOCKSIZE=y\n\
CONFIG_FEATURE_TFTP_DEBUG=y\n\
CONFIG_TRACEROUTE=y\n\
CONFIG_FEATURE_TRACEROUTE_VERBOSE=y\n\
CONFIG_FEATURE_TRACEROUTE_SOURCE_ROUTE=y\n\
CONFIG_FEATURE_TRACEROUTE_USE_ICMP=y\n\
CONFIG_VCONFIG=y\n\
CONFIG_WGET=y\n\
CONFIG_FEATURE_WGET_STATUSBAR=y\n\
CONFIG_FEATURE_WGET_AUTHENTICATION=y\n\
CONFIG_FEATURE_WGET_IP6_LITERAL=y\n\
CONFIG_UDHCPD=y\n\
CONFIG_UDHCPC=y\n\
CONFIG_DUMPLEASES=y\n\
CONFIG_FEATURE_UDHCP_SYSLOG=y\n\
# CONFIG_FEATURE_UDHCP_DEBUG is not set\n\
CONFIG_ZCIP=y\n\
CONFIG_FREE=y\n\
CONFIG_FUSER=y\n\
CONFIG_KILL=y\n\
CONFIG_KILLALL=y\n\
CONFIG_PIDOF=y\n\
CONFIG_FEATURE_PIDOF_SINGLE=y\n\
CONFIG_FEATURE_PIDOF_OMIT=y\n\
CONFIG_PS=y\n\
CONFIG_FEATURE_PS_WIDE=y\n\
CONFIG_RENICE=y\n\
CONFIG_BB_SYSCTL=y\n\
CONFIG_TOP=y\n\
CONFIG_FEATURE_TOP_CPU_USAGE_PERCENTAGE=y\n\
CONFIG_UPTIME=y\n\
# CONFIG_FEATURE_SH_IS_ASH is not set\n\
# CONFIG_FEATURE_SH_IS_HUSH is not set\n\
# CONFIG_FEATURE_SH_IS_LASH is not set\n\
# CONFIG_FEATURE_SH_IS_MSH is not set\n\
CONFIG_FEATURE_SH_IS_NONE=y\n\
CONFIG_ASH=y\n\
CONFIG_ASH_JOB_CONTROL=y\n\
CONFIG_ASH_READ_NCHARS=y\n\
CONFIG_ASH_READ_TIMEOUT=y\n\
CONFIG_ASH_ALIAS=y\n\
CONFIG_ASH_MATH_SUPPORT=y\n\
CONFIG_ASH_MATH_SUPPORT_64=y\n\
CONFIG_ASH_GETOPTS=y\n\
CONFIG_ASH_CMDCMD=y\n\
CONFIG_ASH_BUILTIN_ECHO=y\n\
CONFIG_ASH_MAIL=y\n\
CONFIG_ASH_OPTIMIZE_FOR_SIZE=y\n\
CONFIG_ASH_RANDOM_SUPPORT=y\n\
CONFIG_ASH_EXPAND_PRMT=y\n\
CONFIG_HUSH=y\n\
CONFIG_LASH=y\n\
CONFIG_MSH=y\n\
CONFIG_FEATURE_SH_EXTRA_QUIET=y\n\
CONFIG_FEATURE_SH_STANDALONE_SHELL=y\n\
CONFIG_FEATURE_COMMAND_EDITING=y\n\
CONFIG_FEATURE_COMMAND_EDITING_VI=y\n\
CONFIG_FEATURE_COMMAND_HISTORY=15\n\
CONFIG_FEATURE_COMMAND_SAVEHISTORY=y\n\
CONFIG_FEATURE_COMMAND_TAB_COMPLETION=y\n\
CONFIG_FEATURE_COMMAND_USERNAME_COMPLETION=y\n\
CONFIG_FEATURE_SH_FANCY_PROMPT=y\n\
CONFIG_SYSLOGD=y\n\
CONFIG_FEATURE_ROTATE_LOGFILE=y\n\
CONFIG_FEATURE_REMOTE_LOG=y\n\
CONFIG_FEATURE_IPC_SYSLOG=y\n\
CONFIG_FEATURE_IPC_SYSLOG_BUFFER_SIZE=16\n\
CONFIG_LOGREAD=y\n\
CONFIG_FEATURE_LOGREAD_REDUCED_LOCKING=y\n\
CONFIG_KLOGD=y\n\
CONFIG_LOGGER=y\n\
CONFIG_END=n\n";
#endif /* _BBCONFIG_H */
