str_data = '111010001101100011010001010001101111001111110001000000000001101010001100011010110111011010101100000010000000000001000101000000000000000000101000101111111101001001000000000000000100000000000110110011101101000001100111001110111000110001100110101011000001000000001100011110110000000110111011111100101100100000110001000100000000010111100000111001000000000001000010100110100101000000010000000000001111101110110000100111010000000000000000000000000000000000000000000000000000000'
fields_ranges = {
    'destinationmac': (0, 48),
    'sourcemac': (48, 96),
    'typei': (96, 112),
    'version': (112, 116),
    'IHL': (116, 120),
    'DSCP': (120, 126),
    'ECN': (126, 128),
    'Totallength': (128, 144),
    'Identification': (144, 160),
    'flags': (160, 163),
    'Fragmentoffset': (163, 173),
    'Timetolive': (173, 181),
    'Protocol': (182, 189),
    'Headerchecksum': (189, 205),
    'SourceIPAddress': (205, 237),
    'DestinationIPAddress': (237, 269),
    'SourcePort': (269, 285),
    'DestinationPort': (285, 301),
    'SequenceNumber': (301, 333),
    'AcknowledgementNumber': (333, 365),
    'HeaderLength': (365, 369),
    'ReservedBits': (369, 375),
    'URG': (375, 376),
    'ACK': (376, 377),
    'PSH': (377, 378),
    'RST': (378, 379),
    'SYN': (379, 380),
    'FIN': (380, 381),
    'WindowSize': (381, 397),
    'Checksum': (397, 413),
    'UrgentPointer': (413, 429),
}

# Initialize empty variables for each field
fields = {field: '' for field in fields_ranges}

# Extract values for each field
for field, (start, end) in fields_ranges.items():
    fields[field] = str_data[start:end]

# Print the values
for field, value in fields.items():
    print(f"{field}: {value}")
