FROM nginx:1.25

RUN mkdir -p /rootfs/usr/sbin /rootfs/etc/nginx /rootfs/usr/share/nginx/html /rootfs/var/log/nginx /rootfs/var/run /rootfs/tmp /rootfs/lib

RUN cp /usr/sbin/nginx /rootfs/usr/sbin/
RUN cp -r /etc/nginx/* /rootfs/etc/nginx/
RUN cp -r /usr/share/nginx/html/* /rootfs/usr/share/nginx/html/

RUN echo "daemon off;" >> /rootfs/etc/nginx/nginx.conf

RUN ldd /usr/sbin/nginx | grep -o '/lib/[^ ]*' | xargs -I {} cp {} /rootfs/lib/
