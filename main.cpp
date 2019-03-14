#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t packet[] = { "\x88\x36\x6c\xe9\xc0\x10\xd8\xc4\x97\xaa\xa9\xf5\x08\x00\x45\x00" \
"\x01\xd7\x2d\xb5\x40\x00\x80\x06\x00\x00\xc0\xa8\x00\x08\xaf\xd5" \
"\x23\x27\x07\xc1\x00\x50\x2d\xf0\x82\x13\x18\xbb\x53\x95\x50\x18" \
"\x04\x02\x95\x76\x00\x00\x47\x45\x54\x20\x2f\x20\x48\x54\x54\x50" \
"\x2f\x31\x2e\x31\x0d\x0a\x48\x6f\x73\x74\x3a\x20\x74\x65\x73\x74" \
"\x2e\x67\x69\x6c\x67\x69\x6c\x2e\x6e\x65\x74\x0d\x0a\x43\x6f\x6e" \
"\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x6b\x65\x65\x70\x2d\x61\x6c" \
"\x69\x76\x65\x0d\x0a\x43\x61\x63\x68\x65\x2d\x43\x6f\x6e\x74\x72" \
"\x6f\x6c\x3a\x20\x6d\x61\x78\x2d\x61\x67\x65\x3d\x30\x0d\x0a\x55" \
"\x70\x67\x72\x61\x64\x65\x2d\x49\x6e\x73\x65\x63\x75\x72\x65\x2d" \
"\x52\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x31\x0d\x0a\x55\x73\x65" \
"\x72\x2d\x41\x67\x65\x6e\x74\x3a\x20\x4d\x6f\x7a\x69\x6c\x6c\x61" \
"\x2f\x35\x2e\x30\x20\x28\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54" \
"\x20\x31\x30\x2e\x30\x3b\x20\x57\x69\x6e\x36\x34\x3b\x20\x78\x36" \
"\x34\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35" \
"\x33\x37\x2e\x33\x36\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69" \
"\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65" \
"\x2f\x37\x32\x2e\x30\x2e\x33\x36\x32\x36\x2e\x31\x32\x31\x20\x53" \
"\x61\x66\x61\x72\x69\x2f\x35\x33\x37\x2e\x33\x36\x0d\x0a\x41\x63" \
"\x63\x65\x70\x74\x3a\x20\x74\x65\x78\x74\x2f\x68\x74\x6d\x6c\x2c" \
"\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x68\x74\x6d" \
"\x6c\x2b\x78\x6d\x6c\x2c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f" \
"\x6e\x2f\x78\x6d\x6c\x3b\x71\x3d\x30\x2e\x39\x2c\x69\x6d\x61\x67" \
"\x65\x2f\x77\x65\x62\x70\x2c\x69\x6d\x61\x67\x65\x2f\x61\x70\x6e" \
"\x67\x2c\x2a\x2f\x2a\x3b\x71\x3d\x30\x2e\x38\x0d\x0a\x41\x63\x63" \
"\x65\x70\x74\x2d\x45\x6e\x63\x6f\x64\x69\x6e\x67\x3a\x20\x67\x7a" \
"\x69\x70\x2c\x20\x64\x65\x66\x6c\x61\x74\x65\x0d\x0a\x41\x63\x63" \
"\x65\x70\x74\x2d\x4c\x61\x6e\x67\x75\x61\x67\x65\x3a\x20\x6b\x6f" \
"\x2d\x4b\x52\x2c\x6b\x6f\x3b\x71\x3d\x30\x2e\x39\x2c\x65\x6e\x2d" \
"\x55\x53\x3b\x71\x3d\x30\x2e\x38\x2c\x65\x6e\x3b\x71\x3d\x30\x2e" \
"\x37\x0d\x0a\x0d\x0a" };

	uint8_t packet_mac[] = { "\x88\x36\x6c\xe9\xc0\x10\xd8\xc4\x97\xaa\xa9\xf5" };
	printf("smac = %02x:%02x:%02x:%02x:%02x:%02x\n", packet_mac[0], packet_mac[1],packet_mac[2], packet_mac[3], packet_mac[4], packet_mac[5]);
	printf("dmac = %02x:%02x:%02x:%02x:%02x:%02x\n", packet_mac[6], packet_mac[7], packet_mac[8], packet_mac[9], packet_mac[10], packet_mac[11]);

	uint8_t packet_ip[] = { "\xc0\xa8\x00\x08\xaf\xd5\x23\x27" };
	printf("sip = %d.%d.%d.%d\n", packet_ip[0], packet_ip[1], packet_ip[2], packet_ip[3]);
	printf("dip = %d.%d.%d.%d\n", packet_ip[4], packet_ip[5], packet_ip[6], packet_ip[7]);

	uint8_t packet_port[] = { "\x07\xc1\x00\x50" };
	printf("sport = %d\n", packet_port[0]*256+packet_port[1]);
	printf("dport = %d\n", packet_port[2]*256+packet_port[3]);

	printf("http date = ");
	for (int i = 0; i <= 15; i++) {
		uint8_t packet_http[] = { "\x47\x45\x54\x20\x2f\x20\x48\x54\x54\x50\x2f\x31\x2e\x31\x0d\x0a" };
		printf("%c", packet_http[i]);
	}
}
